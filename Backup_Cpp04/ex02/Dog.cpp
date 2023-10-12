/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:41:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog constructor start. And insert thair brain." << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::Dog(std::string type) : AAnimal(type)
{
	std::cout << "Dog " << this->_type << " constructor start. And insert thair brain." << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::~Dog()
{
	delete	this->_brain;
	std::cout << "Dog remove thair brain. And destructor destroy." << std::endl;
	return;
}
void	 Dog::makeSound()
{
	std::cout << "Bark Bark Bark ...!!!(dog said)" << std::endl;
}

Dog::Dog(Dog const & rhs) : AAnimal(rhs._type)
{
	this->_type = rhs._type;
	this->_brain = new Brain;
	for(int i = 0; i < 100 ; ++i){
		this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	return;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	{
		for(int i = 0; i < 100 ; i++){
		this->_brain->setIdea(i, rhs._brain->getIdea(i)); 
		}
	}
	return(*this);
}

void Dog::getBrain()
{
	for(int i = 0; i < 100 ; ++i){
		std::cout << this->_brain->getIdea(i) << std::endl;
	}
	return;
}
void Dog::setBrain(int i, std::string  idea)
{
	this->_brain->setIdea(i, idea);
	return;
}