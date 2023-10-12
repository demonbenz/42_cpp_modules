/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:11:16 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 19:12:46 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon_name) : _name(name), _weapon(weapon_name)
{
    std::cout << "HumanA [" << PURPLE << this->_name << RESET 
    << "] Constructor create." << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA [" << PURPLE << this->_name << RESET 
    << "] Destructor destroy." << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attack with thair " << _weapon.getType() << std::endl;
}
