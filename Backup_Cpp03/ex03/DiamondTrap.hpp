/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 15:48:31 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include<iostream>
#include<string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class	DiamondTrap :  public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
	
	using FragTrap::_hitPoint;
	using FragTrap::_attackDamage;
	using ScavTrap::_energyPoint;
	using ScavTrap::attack;
	// This is called "overload constructor" that is property of plymorphism in c++. 
	DiamondTrap(void);
	DiamondTrap(std::string name);

	// Destructor call
	~DiamondTrap(void);

	// functions
	// void attack(const std::string& target);
	void whoAmI();
};

#endif
