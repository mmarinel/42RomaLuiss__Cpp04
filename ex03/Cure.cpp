/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:55:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/15 15:35:07 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

void	Cure::use( ICharacter& target )
{
	std::cout
		<< YELLOW
		<< "* heals " << target.getName() << "'s wounds *"
		<< RESET
		<< std::endl;
}

AMateria*	Cure::clone( void ) const
{
	Cure*	copy = new Cure();

	return (copy);
}

const Cure&	Cure::operator = ( const Cure& to_copy )
{
	print_line("Cure- Copy Assignment Operator", YELLOW);

	return (*this);
}

Cure::Cure( const Cure& to_copy ) : AMateria(to_copy.type)
{
	print_line("Cure- Copy Constructor", BOLDGREEN);

	*this = to_copy;
}

Cure::Cure() : AMateria("Cure")
{
	print_line("Cure- Default Constructor", YELLOW);
}

Cure::~Cure()
{
	print_line("<<Cure Destroyed>>", BOLDRED);
}
