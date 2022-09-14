/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:59:19 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:56:32 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound( void ) const
{
	print_line("Bark bark!", YELLOW);
}

const Dog&	Dog::operator	=	( const Dog& to_copy)
{
	print_line("Dog- Copy Assignment Operator", YELLOW);

	this->type.assign(to_copy.type);

	return (*this);
}

Dog::Dog( const Dog& to_copy )
{
	print_line("Dog- Copy Constructor", BOLDGREEN);

	*this = to_copy;
}

Dog::Dog()
{
	print_line("Dog- Default Constructor", BOLDGREEN);

	this->type.assign("Dog");
}

Dog::~Dog()
{
	print_line("<<Dog Destroyed>>", BOLDRED);
}
