/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:50:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/14 11:14:50 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const Brain&	Brain::operator	= 	(const Brain& br)
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		this->ideas[i].assign(br.ideas[i]);

	return (*this);
}

Brain::Brain	( const Brain& br )
{
	*this = br;
}

Brain::Brain()
{
	for (int i = 0; i < IDEAS_SIZE; i++)
		this->ideas[i].assign("");
}

Brain::~Brain()
{
	print_line("<<Brain Destroyed>>", BOLDRED);
}
