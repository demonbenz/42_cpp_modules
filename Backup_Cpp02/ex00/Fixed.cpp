/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/22 18:34:06 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
    //this->_fixedPointNumber = 0;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}
Fixed::Fixed(Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNumber = rhs.getRawBits();
    return(*this);
}

int Fixed::getRawBits( void ) const
{
   std::cout << "getRawBits member function called" << std::endl;
   return(this->_fixedPointNumber);
}
void Fixed::setRawBits( int const raw )
{
   this->_fixedPointNumber = raw; 
}


