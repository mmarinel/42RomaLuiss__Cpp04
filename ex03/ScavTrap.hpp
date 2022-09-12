/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:52:59 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 12:35:04 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include "utils.hpp"
# include "../colors.hpp"

class ScavTrap : public virtual ClapTrap//* We need virtual in order not to define two storages for Claptrap members
{
private:
	bool	in_gate_keeping_mode;
public:
	void			attack		( const std::string& target );
	void			guardGate	( void );
	void			set_mode	( const bool mode );
	bool			get_mode	( void ) const;
	const ScavTrap&	operator =	( const ScavTrap& to_copy );
					ScavTrap	( const std::string name );
					ScavTrap	( const ScavTrap& to_copy );
					ScavTrap	();
					~ScavTrap	();
};

#endif /* SCAVTRAP_H */
