/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 16:31:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void)
{
    this->_name = "No name";
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << CYAN << "FragTrap: No name constructor call." << RESET << std::endl;
    return;
}
FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << CYAN << "FragTrap " << name << " Constructor call with innitialize object data." << RESET << std::endl;
    return;
}
FragTrap::~FragTrap(void)
{
    std::cout << CYAN << "FragTrap " << this->_name <<" Destructor call." << RESET << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
   *this = src;
   return; 
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDamage = rhs._attackDamage;
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
     std::cout << "FragTrap " << this->_name << " is do HightFive action." << std::endl;
     return;
}
