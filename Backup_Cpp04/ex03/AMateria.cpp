/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/10 15:10:19 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
	this->_type = "default";
	// std::cout << "Constructor AMateria create." << std::endl;
	return;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	// std::cout << "Constructor AMateria create." << std::endl;
	return;
}

AMateria::~AMateria()
{
	// std::cout << "Destructor AMateria destroy." << std::endl;
	return;
}
AMateria::AMateria(AMateria const & rhs)
{
	this->_type = rhs._type;
	return;
}
AMateria & AMateria::operator=(AMateria const & rhs)
{	
	this->_type = rhs._type;	
	return(*this);	
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{	
	std::cout << "* shoots an default power at " << target.getName() << " *" << std::endl;
	return;
}