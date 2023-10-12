/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:09:44 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 19:17:38 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon: [" << YELLOW << this->_type << RESET 
    << "] Constructor is create." << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon: ["<< YELLOW << this->_type << RESET 
    << "] Destructor destroy." << std::endl;
}
std::string Weapon::getType(void)
{
    return(this->_type);
}
void    Weapon::setType(std::string type)
{
    this->_type = type;
}