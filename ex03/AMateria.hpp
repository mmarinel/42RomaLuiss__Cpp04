/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:09:28 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/15 18:32:04 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include "utils.hpp"

# include <string>
# include <iostream>

class AMateria
{
protected:
	const std::string	type;
public:
			std::string const &	getType() const;//* Returns the materia type
	virtual void				use( ICharacter& target );
	virtual AMateria*			clone() const = 0;
								AMateria( std::string const & type );
								AMateria();
	virtual						~AMateria();
};


#endif /* AMATERIA_H */