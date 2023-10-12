/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:37:01 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor start." << std::endl;
	return;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat " << this->_type << " constructor start." << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor destroy." << std::endl;
	return;
}
void	 Cat::makeSound() const
{
	std::cout << "Meaw Meaw Meaw ...!!!" << std::endl;
}

Cat::Cat(Cat const & rhs) : Animal(rhs._type)
{
	*this = rhs;
	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}
