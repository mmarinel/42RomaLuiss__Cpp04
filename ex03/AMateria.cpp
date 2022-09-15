/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:20:54 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/15 14:40:54 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ) : type(type)
{
	print_line("AMateria: std::string Constructor", BOLDGREEN);
}

AMateria::AMateria() : type("")
{
	print_line("AMateria: Default Constructor", BOLDGREEN);
}

AMateria::~AMateria()
{
	print_line("<<AMateria Destroyed>>", BOLDRED);
}

void	AMateria::use( ICharacter& target )
{
	std::cout
	<< YELLOW
	<< "* Cast a generic spell at "
	<< target.getName()
	<< RESET
	<< std::endl;
}

std::string const &	AMateria::getType( void ) const
{
	return (this->type);
}
