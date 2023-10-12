/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/11 19:25:28 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	this->_type = "cure";
	// std::cout << "Constructor Cure create." << std::endl;
	return;
}

Cure::Cure(std::string const & type)
{
	this->_type = type;
	// std::cout << "Constructor Cure create." << std::endl;
	return;
}

Cure::~Cure()
{
	// std::cout << "Destructor Cure destroy." << std::endl;
	return;
}
Cure::Cure(Cure const & rhs) : AMateria(rhs._type)
{
	this->_type = rhs._type;
	return;
}
Cure & Cure::operator=(Cure const & rhs)
{	
	this->_type = rhs._type;	
	return(*this);	
}

AMateria * Cure::clone() const
{
	// std::cout << "cloninge cure." << std::endl;
	Cure *tmp = new Cure;
	tmp->_type = this->_type;
	return(tmp);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *"	<< std::endl;
	return;
}