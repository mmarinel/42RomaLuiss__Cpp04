/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:55:21 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:32:50 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound( void ) const
{
	print_line("Disturbance in the force!", YELLOW);
}

WrongAnimal::WrongAnimal() : type("Meta")
{
	print_line("WrongAnimal- Default Constructor", BOLDGREEN);
}

WrongAnimal::~WrongAnimal()
{
	print_line("<<WrongAnimal Destroyed>>", BOLDRED);
}

const std::string&	WrongAnimal::getType( void ) const
{
	return (this->type);
}
