/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:55:21 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:52:06 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound( void ) const
{
	print_line("Disturbance in the force!", YELLOW);
}

const WrongAnimal&	WrongAnimal::operator	=	( const WrongAnimal& to_copy )
{
	print_line("WrongAnimal- Copy Assignment Operator", YELLOW);

	this->type.assign(to_copy.type);

	return (*this);
}

WrongAnimal::WrongAnimal( const WrongAnimal& to_copy )
{
	print_line("WrongAnimal- Copy Constructor", BOLDGREEN);

	*this = to_copy;
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
