/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:22 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 12:33:15 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound( void ) const
{
	static	size_t	idea = -1;

	idea = (idea + 1) % IDEAS_SIZE;
	print_line("Meow..." + this->brain->get_idea(idea), YELLOW);
}

const Cat&	Cat::operator	=	( const Cat& to_copy)
{
	print_line("Cat- Copy Assignment Operator", YELLOW);

	this->type.assign(to_copy.type);
	this->brain = to_copy.brain;

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
	this->brain = new Brain();

	for (size_t i = 0; i < IDEAS_SIZE; i++)
		if (i % 2 == 0)
			this->brain->set_idea("catnip", i);
		else
			this->brain->set_idea("tuna", i);
}

Cat::~Cat()
{
	delete this->brain;
	print_line("<<Cat Destroyed>>", BOLDRED);
}
