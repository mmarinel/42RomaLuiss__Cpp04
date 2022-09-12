/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:07:57 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 17:41:48 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

# include <string>
# include <iostream>

# include "WrongAnimal.hpp"
# include "utils.hpp"

class WrongCat : public WrongAnimal
{
private:
	/* data */
public:
	void	makeSound	( void ) const;
			WrongCat	();
			~WrongCat	();
};


#endif /* CAT_H */
