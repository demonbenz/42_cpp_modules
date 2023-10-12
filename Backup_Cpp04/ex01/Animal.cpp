/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/05 16:53:06 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
	this->_type = "Animal";
	std::cout << "Animal (default) constructor start." << std::endl;
	return;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal " << this->_type << " constructor start." << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor destroy." << std::endl;
	return;
}
void	 Animal::makeSound() const
{
	std::cout << "Fooo Barrrrr (Animal said.)" << std::endl;
}

Animal::Animal(Animal const & rhs)
{
	this->_type = rhs._type;
	return;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}

std::string Animal::getType() const
{
	return(this->_type);	
}
void Animal::setType(std::string type)
{
	this->_type = type;
	return;
}