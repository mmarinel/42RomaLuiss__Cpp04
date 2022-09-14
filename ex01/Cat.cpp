/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:22 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:51:55 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound( void ) const
{
	print_line("Meow..", YELLOW);
}

const Cat&	Cat::operator	=	( const Cat& to_copy)
{
	print_line("Cat- Copy Assignment Operator", YELLOW);

	this->type.assign(to_copy.type);

	return (*this);
}

Cat::Cat( const Cat& to_copy )
{
	print_line("Cat- Copy Constructor", BOLDGREEN);

	*this = to_copy;
}

Cat::Cat()
{
	print_line("Cat- Default Constructor", BOLDGREEN);

	this->type.assign("Cat");
}

Cat::~Cat()
{
	print_line("<<Cat Destroyed>>", BOLDRED);
}
