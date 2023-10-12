/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:55 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("No name")
{
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
    std::cout << BLUE << "DiamondTrap: No name constructor call." << RESET << std::endl;
    return;
}
DiamondTrap::DiamondTrap(std::string name) 
: ClapTrap(name + "_clap_name"), ScavTrap( name + "_scav_name"), FragTrap(name + "_frag_name"), _name(name)
{
    FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    FragTrap::_attackDamage = 30;
    std::cout << BLUE << "DiamondTrap " << name << " Constructor call with innitialize object data." << RESET << std::endl;
    return;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << BLUE << "DiamondTrap " << this->_name <<" Destructor call." << RESET << std::endl;
    return;
}

void DiamondTrap::whoAmI()
{
    std::cout << std::endl;
    std::cout << GREEN << "--------------whoAmI--------------" << std::endl;
    std::cout << "DiamondTrap [" << this->_name <<"] said 'Who am I ?'" << std::endl;
    std::cout << "I say my name is [" << this->_name << "]" << std::endl;
    std::cout << "but my clap_name is [" << this->getName() << "]"<< std::endl;
    std::cout << GREEN << "--------------whoAmI--------------" << RESET << std::endl;
    std::cout << std::endl; 
    return;
}