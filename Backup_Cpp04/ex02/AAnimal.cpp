/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/05 19:27:16 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("Animal")
{
	this->_type = "AAnimal";
	std::cout << "AAnimal (default) constructor start." << std::endl;
	return;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal " << this->_type << " constructor start." << std::endl;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor destroy." << std::endl;
	return;
}
// void	 Animal::makeSound() const
// {
// 	std::cout << "Fooo Barrrrr (Animal said.)" << std::endl;
// }

AAnimal::AAnimal(AAnimal const & rhs)
{
	this->_type = rhs._type;
	return;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string AAnimal::getType() const
{
	return(this->_type);	
}
void AAnimal::setType(std::string type)
{
	this->_type = type;
	return;
}