/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 19:54:02 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

# define ANIMALS 4

static size_t	first_dog_occurence(Animal *animals[ANIMALS]);
//* end of static declarations

int	main()
{
	Animal	*animals[ANIMALS];
	Dog		copy;

	for (size_t i = 0; i < ANIMALS; i++)
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();

	for (size_t i = 0; i < ANIMALS; i++)
	{
		std::cout << YELLOW
			<< "Animal " << i << " is a " << animals[i]->getType()
			<< ": " << RESET;
		animals[i]->makeSound();
	}

	std::cout
		<< std::endl
		<< CYAN
		<< "Checking correctness of Deep Copy"
		<< RESET
		<< std::endl;

	copy = *animals[first_dog_occurence(animals)];

	std::cout << std::endl;
	std::cout << "Orginal ideas[0]: ";
	animals[first_dog_occurence(animals)]->makeSound();
	std::cout << "Copy ideas[0]: ";
	copy.makeSound();
	std::cout << std::endl;

	std::cout
		<< CYAN
		<< "Modifying the copy"
		<< RESET
		<< std::endl;
	copy.emptyMind();

	std::cout << "Orginal ideas[1]: ";
	animals[first_dog_occurence(animals)]->makeSound();
	std::cout << "Copy ideas[1]: ";
	copy.makeSound();

	for (size_t i = 0; i < ANIMALS; i++)
		delete animals[i];
	return 0;
}

static size_t	first_dog_occurence(Animal *animals[ANIMALS])
{
	Dog		*orig;
	size_t	i;

	i = 0;
	do
	{
		orig = dynamic_cast<Dog *>(animals[i++]);
	} while (nullptr == orig);

	return (i - 1);
}
