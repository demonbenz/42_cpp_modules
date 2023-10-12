/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:52:06 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/11 23:34:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : _type("default")
{
	// std::cout << "Floor: Default Constructor create." << std::endl;
	for(int i = 0; i < NUM; i++)
	{
		this->_thing[i] = NULL;
	}
	return;
}

Floor::Floor(std::string type) : _type(type)
{
	// std::cout << "Floor: Constructor create." << std::endl;
	for(int i = 0; i < NUM; i++)
	{
		this->_thing[i] = NULL;
	}
	return;
}

Floor::~Floor()
{
	for(int i = 0; i < NUM; i++)
	{
		if(this->_thing[i])
		{
			delete this->_thing[i];
			this->_thing[i] = NULL;
			// std::cout << "Clear the stuff in Floor. i = ["<< i << "]" << std::endl;
		}
	}
	// std::cout << "Floor: Destructer destroy." << std::endl;
	return;
}

Floor::Floor(Floor const & rhs) : _type(rhs._type)
{
	for(int i = 0; i < NUM; i++)
	{
		if(rhs._thing[i])
		{
			this->_thing[i] = rhs._thing[i]->clone();
		}
		else
			this->_thing[i] = NULL;
	}
	return;
}

Floor & Floor::operator=(Floor const & rhs)
{
	this->_type = rhs._type;
	if(this == &rhs)
		return(*this);

	for(int i = 0; i < NUM; i++)
	{
		delete _thing[i];
	}
	for(int i = 0; i < NUM; i++)
	{
		if(rhs._thing[i])
			this->_thing[i] = rhs._thing[i]->clone();
		else
			this->_thing[i] = NULL;
	}
	return(*this);
}

void	Floor::leftOn(AMateria * m)
{
	for(int i = 0; i < NUM; i++)
	{
		if(!this->_thing[i])
		{
			this->_thing[i] = m;
			return;
		}
	}
	std::cout << "floor is full there is mess around here.!!!" << std::endl;
	return;
}

AMateria * Floor::getFrom(std::string const materia)
{
	AMateria *tmp;
	for(int i = 0; i < NUM; i++)
	{
		if(this->_thing[i]->getType() == materia)
		{
			tmp = this->_thing[i];
			this->_thing[i] = NULL;
			return(tmp);	
		}
	}
	std::cout << "Cant find any thing fromthe floor" << std::endl;
	return(NULL);
}

void	Floor::setType(std::string type)
{
	this->_type = type;
	return;
}

std::string	Floor::getType()
{
	return(this->_type);
}
