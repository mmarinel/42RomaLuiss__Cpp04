/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:59:26 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:35 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

# include <string>
# include <iostream>

# include "utils.hpp"
# include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
			void	makeSound	( void ) const;
	const	Dog&	operator =	( const Dog& to_copy );
					Dog			( const Dog& to_copy );
					Dog			();
					~Dog		();
};


#endif /* DOG_H */
