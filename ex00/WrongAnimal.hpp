/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:28:18 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:41:40 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

# include <string>
# include <iostream>
# include "utils.hpp"

class WrongAnimal
{
protected:
	std::string	type;
public:
			void			makeSound		( void ) const;
	const	std::string&	getType			( void ) const;
							WrongAnimal		();
							~WrongAnimal	();
};


#endif /* ANIMAL_H */
