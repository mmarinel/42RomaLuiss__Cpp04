/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:55:21 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:26:27 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound( void ) const
{
	print_line("Some kind of air vibration", YELLOW);
}

Animal::Animal() : type("Meta")
{
	print_line("Animal- Default Constructor", BOLDGREEN);
}

Animal::~Animal()
{
	print_line("<<Animal Destroyed>>", BOLDRED);
}

const std::string&	Animal::getType( void ) const
{
	return (this->type);
}
