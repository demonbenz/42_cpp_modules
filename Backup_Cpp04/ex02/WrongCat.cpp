/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:42:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor start." << std::endl;
	return;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat " << this->_type << " constructor start." << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor destroy." << std::endl;
	return;
}
void	 WrongCat::makeSound() const
{
	std::cout << "Maaaaaaaw Mooooaw Muiiiiii wrooooong..caaaaat.!!!" << std::endl;
}

WrongCat::WrongCat(WrongCat const & rhs) : WrongAnimal(rhs._type)
{
	*this = rhs;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs._type;
	return(*this);
}
