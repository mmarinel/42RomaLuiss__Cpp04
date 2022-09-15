/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:50:52 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/15 18:37:26 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

# define MATERIAS 4

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "utils.hpp"

# include <string>
# include <iostream>

class Character : public ICharacter
{
private:
	const std::string	name;
	AMateria			*materias[MATERIAS];
	t_list				*__garbage;
public:
	virtual void 		equip( AMateria* m );
	virtual void 		unequip(int idx);
	AMateria*			getMateria( int idx );
	const Character&	operator =	( const Character& to_copy );
						Character	( const Character& to_copy );
						Character	( const std::string& name );
						Character	();
						~Character	();
};


#endif /* CHARACTER_H */