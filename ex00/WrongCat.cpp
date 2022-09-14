/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:22 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:52:13 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound( void ) const
{
	print_line("Wrong Meow!", YELLOW);
}

const WrongCat& WrongCat::operator	=	( const WrongCat& to_copy)
{
	print_line("WrongCat- Copy Assignment Operator", YELLOW);

	this->type.assign(to_copy.type);

	return (*this);
}

WrongCat::WrongCat( const WrongCat& to_copy )
{
	print_line("WrongCat- Copy Constructor", BOLDGREEN);

	*this = to_copy;
}

WrongCat::WrongCat()
{
	print_line("WrongCat- Default Constructor", BOLDGREEN);

	this->type.assign("WrongCat");
}

WrongCat::~WrongCat()
{
	print_line("<<WrongCat Destroyed>>", BOLDRED);
}
