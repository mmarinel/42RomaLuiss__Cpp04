/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:28:18 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:26:32 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

# include <string>
# include <iostream>
# include "utils.hpp"

class Animal
{
protected:
	std::string	type;
public:
	virtual			void			makeSound	( void ) const;
			const	std::string&	getType		( void ) const;
									Animal		();
									~Animal		();
};


#endif /* ANIMAL_H */
