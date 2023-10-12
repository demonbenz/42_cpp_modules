/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:12:43 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/23 18:14:28 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "HumanB ["<< GREEN << this->_name << RESET 
    << "] Constructor create." << std::endl;
    std::cout << "Create without any weapon." << std::endl;
    this->_weapon = NULL;
}
HumanB::~HumanB()
{
    std::cout << "HumanB [" << GREEN << this->_name << RESET 
    << "] Destructor destroy." << std::endl;
}
void    HumanB::setWeapon(Weapon& weapon_name)
{
    this->_weapon = &weapon_name;
}
void    HumanB::attack()
{
    	if(this->_weapon == NULL)
	{
	std::cout << this->_name << " attack with no weapon.!!!" << std::endl;
		return;
	}
	std::cout << this->_name << " attack with thair " 
		<< _weapon->getType() << std::endl;
	return;
}
