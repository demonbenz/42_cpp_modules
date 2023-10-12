/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/11 19:24:47 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	this->_type = "ice";
	// std::cout << "Constructor Ice create." << std::endl;
	return;
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
	// std::cout << "Constructor Ice create." << std::endl;
	return;
}

Ice::~Ice()
{
	// std::cout << "Destructor Ice destroy." << std::endl;
	return;
}
Ice::Ice(Ice const & rhs) : AMateria(rhs._type)
{
	this->_type = rhs._type;
	return;
}
Ice & Ice::operator=(Ice const & rhs)
{	
	this->_type = rhs._type;	
	return(*this);	
}

AMateria* Ice::clone() const
{
	// std::cout << "cloninge ice." << std::endl;
	Ice *tmp = new Ice;
	tmp->_type = this->_type;
	return(tmp);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"	<< std::endl;
	return;
}