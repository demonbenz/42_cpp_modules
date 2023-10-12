/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:38:07 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor start." << std::endl;
	return;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Animal " << this->_type << " constructor start." << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor destroy." << std::endl;
	return;
}
void	 Dog::makeSound() const
{
	std::cout << "Bark Bark Bark ...!!!" << std::endl;
}

Dog::Dog(Dog const & rhs) : Animal(rhs._type)
{
	*this = rhs;
	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}