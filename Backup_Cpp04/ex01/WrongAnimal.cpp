/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/04 14:30:54 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor start." << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal " << this->_type << " constructor start." << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor destroy." << std::endl;
	return;
}
void	 WrongAnimal::makeSound() const
{
	std::cout << "Wrong Wrong Wroooong aaaanimaaaaal !!!!!." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	*this = rhs;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string WrongAnimal::getType() const
{
	return(this->_type);	
}
void WrongAnimal::setType(std::string type)
{
	this->_type = type;
	return;
}