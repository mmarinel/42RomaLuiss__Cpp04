/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:55:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/16 11:02:37 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

void	Ice::use( ICharacter& target )
{
	std::cout
		<< YELLOW
		<< "* shoots an ice bolt at " << target.getName() << " *"
		<< RESET
		<< std::endl;
}

AMateria*	Ice::clone( void ) const
{
	Ice*	copy = new Ice();

	return (copy);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
const Ice&	Ice::operator = ( const Ice& to_copy )
{
	print_line("Ice- Copy Assignment Operator", YELLOW);

	return (*this);
}
#pragma GCC diagnostic pop

Ice::Ice( const Ice& to_copy ) : AMateria(to_copy.type)
{
	print_line("Ice- Copy Constructor", BOLDGREEN);

	*this = to_copy;
}

Ice::Ice() : AMateria("ice")
{
	print_line("Ice- Default Constructor", BOLDGREEN);
}

Ice::~Ice()
{
	print_line("<<Ice Destroyed>>", BOLDRED);
}
