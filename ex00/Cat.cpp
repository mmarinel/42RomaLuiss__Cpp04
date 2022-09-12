/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:22 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:26:57 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound( void ) const
{
	print_line("Meow..", YELLOW);
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
