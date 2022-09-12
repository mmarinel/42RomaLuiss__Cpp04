/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:22 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:33:38 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound( void ) const
{
	print_line("Wrong Meow!", YELLOW);
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
