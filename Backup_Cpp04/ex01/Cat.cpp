/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:30:17 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor start. And insert thair brain." << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat " << this->_type << " constructor start. And insert thair brain." << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::~Cat()
{
	delete	this->_brain;
	std::cout << "Cat remove thair brain. And destructor destroy." << std::endl;
	return;
}
void	 Cat::makeSound() const
{
	std::cout << "Meaw Meaw Meaw ...!!!(cat said)" << std::endl;
}

Cat::Cat(Cat const & rhs) : Animal(rhs._type)
{
	this->_type = rhs._type;
	this->_brain = new Brain;
	for(int i = 0; i < 100 ; ++i)
	{
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	return;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	{
		for(int i = 0; i < 100 ; i++){
		this->_brain->setIdea(i, rhs._brain->getIdea(i)); 
		}
	}
	return(*this);
}
void Cat::getBrain()
{
	for(int i = 0; i < 100 ; ++i)
	{
		std::cout << this->_brain->getIdea(i) << std::endl;
	}
}
void Cat::setBrain(int i, std::string  idea)
{
	this->_brain->setIdea(i, idea);
	return;
}