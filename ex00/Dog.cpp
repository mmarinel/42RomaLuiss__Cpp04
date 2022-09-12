/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:59:19 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:26:45 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound( void ) const
{
	print_line("Bark bark!", YELLOW);
}

Dog::Dog()
{
	print_line("Dog- Default Constructor", YELLOW);

	this->type.assign("Dog");
}

Dog::~Dog()
{
	print_line("<<Dog Destroyed>>", BOLDRED);
}
