/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 16:24:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void)
{
    this->_name = "No name";
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << PURPLE << "ScavTrap: No name constructor call." << RESET << std::endl;
    return;
}
ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << PURPLE << "ScavTrap " << name << " Constructor call with innitialize object data." << RESET << std::endl;
    return;
}
ScavTrap::~ScavTrap(void)
{
    std::cout << PURPLE << "ScavTrap " << this->_name <<" Destructor call." << RESET << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
   *this = src;
   return; 
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDamage = rhs._attackDamage;
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_hitPoint <= 0)
    {
        std::cout << RED << "ScavTrap " << this->_name << " is dead." << RESET << std::endl;
        return;
    }
    if(this->_energyPoint <= 0)
    {
        std::cout << RED << "ScavTrap " << this->_name << " is run out of energy." << RESET << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target 
    << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint -= 1;
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
    return;
}