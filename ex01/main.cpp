/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 18:25:17 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

# define ANIMALS 4

int	main()
{
	Animal	*animals[ANIMALS];

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

///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
	std::cout
		<< "Checking correctness of Deep Copy"
		<< std::endl;
	
	// Dog	*orig;
	Dog	copy;
	// orig = dynamic_cast<Dog *>(animals[0]);
	// if (orig != nullptr)
	// {
		// std::cout << "orig: " << orig << "; animals[0]: " << animals[0] << std::endl;
		// std::cout << "to_copy outside: " << animals[0] << std::endl;
		copy = *animals[0];

		std::cout << "Orginal ideas[0]: ";
		animals[0]->makeSound();
		std::cout << std::endl;
		std::cout << "Copy ideas[0]: ";
		copy.makeSound();
		std::cout << std::endl;

		copy.emptyMind();
		std::cout << "Modifying the copy" << std::endl;

		std::cout << "Orginal ideas[1]: ";
		animals[0]->makeSound();
		std::cout << std::endl;
		std::cout << "Copy ideas[1]: ";
		copy.makeSound();
		std::cout << std::endl;
	// }

	for (size_t i = 0; i < ANIMALS; i++)
		delete animals[i];
	return 0;
}
