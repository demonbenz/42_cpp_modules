/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 14:57:33 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie [" << this->_name << "] Constructor is create." << std::endl;
	return;
}

Zombie::Zombie(void) : _name("no_name")
{
	std::cout << "Zombie [" << this->_name << "] Constructor is create." << std::endl;
	return;
}
Zombie::~Zombie()
{
	std::cout << "Zombie [" << this->_name << "] Destructor is destroy." << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
void	Zombie::setName(std::string name)
{
	this->_name = name;
	return;
}
