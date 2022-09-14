/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:07:57 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:34:57 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

# include <string>
# include <iostream>

# include "Animal.hpp"
# include "utils.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
			void	makeSound	( void ) const;
	const	Cat&	operator =	( const Cat& to_copy );
					Cat			( const Cat& to_copy );
					Cat			();
					~Cat		();
};


#endif /* CAT_H */
