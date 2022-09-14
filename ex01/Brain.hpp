/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:33:24 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:16:43 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# define IDEAS_SIZE 100

# include <string>
# include <iostream>
# include "utils.hpp"

class Brain
{
private:
	std::string					ideas[IDEAS_SIZE];
public:
			const	Brain&	operator	= 	(const Brain& br);
							Brain			(const Brain& br);
							Brain			();
	virtual					~Brain			();
};


#endif /* BRAIN_H */