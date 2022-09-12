/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:29:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 12:34:11 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

void	ClapTrap::attack ( const std::string& target )
{
	if (this->energy_points)
	{
		if (this->hit_points)
		{
			attack_print(this->name, target, this->attack_damage);
			this->energy_points -= 1;
		}
		else
			hpFail_print("attack", this->name);
	}
	else
		epFail_print("attack", this->name);
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->hit_points)
	{
		amount = (amount <= this->hit_points ? amount : this->hit_points);
		takeDamage_print(this->name, amount);
		this->hit_points -= amount;
	}
	else
		hpFail_print("takeDamage", this->name);
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->energy_points)
	{
		amount
			= (this->hit_points + amount <= this->max_hit_points
					? amount : this->max_hit_points - this->hit_points);
		beRepaired_print(this->name, amount);
		this->hit_points += amount;
		this->energy_points -= 1;
	}
	else
		epFail_print("beRepaired", this->name);
}

const std::string&	ClapTrap::getName( void ) const
{
	return (this->name);
}

unsigned int	ClapTrap::getHp( void ) const
{
	return (this->hit_points);
}

unsigned int	ClapTrap::getMaxHp( void ) const
{
	return (this->max_hit_points);
}

unsigned int	ClapTrap::getEp( void ) const
{
	return (this->energy_points);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->attack_damage);
}

ClapTrap::ClapTrap ()
{
	print_line("ClapTrap- Default Constructor called", BOLDGREEN);

	this->name.assign("nameless");
	this->hit_points = 10;
	this->max_hit_points = this->hit_points;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap ( const std::string name )
{
	print_line("ClapTrap- String Constructor called", BOLDGREEN);

	this->name.assign(name);
	this->hit_points = 10;
	this->max_hit_points = this->hit_points;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap ( const ClapTrap& to_copy )
{
	print_line("ClapTrap- Copy Constructor called", BOLDGREEN);

	*this = to_copy;
}

const ClapTrap& ClapTrap::operator = ( const ClapTrap& to_copy )
{
	print_line("ClapTrap- Copy Assignment operator called", BOLDMAGENTA);

	this->name.assign(to_copy.name);
	this->hit_points = to_copy.hit_points;
	this->max_hit_points = to_copy.max_hit_points;
	this->energy_points = to_copy.energy_points;
	this->attack_damage = to_copy.attack_damage;

	return (*this);
}

ClapTrap::~ClapTrap ()
{
	print_line("<<ClapTrap destroyed>>", BOLDRED);
}
