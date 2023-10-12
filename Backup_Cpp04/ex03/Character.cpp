/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 00:26:28 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	this->_name = "default_name";
	// std::cout << "Constructor Character create." << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		this->_inventory[i] = NULL;
	}
	return;
}

Character::Character(std::string const & name)
{
	this->_name = name;
	// std::cout << "Constructor Character create." << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		this->_inventory[i] = NULL;
	}
	return;
}

Character::~Character()
{
	// std::cout << "Destructor Character destroy." << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		delete this->_inventory[i];
	}
	return;
}
Character::Character(Character const & rhs)
{
	this->_name = rhs._name;
	for(int i = 0; i < 4 ; i++)
	{
		if(rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return;	
}
Character & Character::operator=(Character const& rhs)
{
	this->_name = rhs._name;
	if(this == &rhs)
		return(*this);
	
	for(int i = 0; i < 4 ; i++)
	{
		delete _inventory[i];
	}
	for(int i = 0; i < 4 ; i++)
	{
		if(rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return(*this);
}

std::string const & Character::getName() const
{
	return(this->_name);
}
 
void Character::equip(AMateria* m)
{
	if(!m)
		return;
	for (int i = 0; i < 4; ++i) 
	{
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            // this->_inventory[i] = m->clone();
			// std::cout << "(clone) equip materia at i = " << i << std::endl;	
            return;
        }
	}
	return;
}
void Character::unequip(int idx)
{
	if(idx >= 0 && idx < 4)
	{
		if(this->_inventory[idx])
		{
			floor.leftOn(this->_inventory[idx]);
			// std::cout << "Left " << (this->_inventory[idx]->getType()) << " on the floor." << std::endl;	
			this->_inventory[idx] = NULL;
		}
	}
	return;
}
void Character::use(int idx, ICharacter& target)
{
	if((idx >= 0 && idx < 4) && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}else
	{
		std::cout << "Cant use any ability , Cause nothing in inventory slot index [" << idx << "]" << std::endl;
	}
	
	return;
}