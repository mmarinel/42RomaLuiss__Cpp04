/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:07:57 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:36:10 by mmarinel         ###   ########.fr       */
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
			Cat			();
			~Cat		();
};


#endif /* CAT_H */
