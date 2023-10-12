/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 00:47:57 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const   Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointNumber(0)
{
    //this->_fixedPointNumber = 0; (you can declare in this form for understand.)
    //std::cout << "Default constructor called" << std::endl;
    return;
}
Fixed::Fixed(int	const integer)
{
    this->_fixedPointNumber = integer << this->_fractionalBits;
    //std::cout << "Int constructor called" << std::endl;
    return;
}
Fixed::Fixed(float const floatingPoint)
{
    this->_fixedPointNumber = roundf(floatingPoint * (1 << this->_fractionalBits));
    //std::cout << "Float constructor called" << std::endl;
    return;
}
Fixed::Fixed(Fixed const & src)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
    return;
}

float Fixed::toFloat( void ) const
{
   return( (float) this->_fixedPointNumber / (float)(1 << this->_fractionalBits) ); 
}

int Fixed::toInt( void ) const
{
    return(this->_fixedPointNumber >> this->_fractionalBits ); 
}

int Fixed::getRawBits( void ) const
{
   //std::cout << "getRawBits member function called" << std::endl;
   return(this->_fixedPointNumber);
}

void Fixed::setRawBits( int const raw )
{
   this->_fixedPointNumber = raw; 
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNumber = rhs.getRawBits();
    return(*this);
}

//-------------------All stuff that addition inside ex02 comparison----------------------//

    //[>]
	bool	Fixed::operator>(Fixed const & rhs) const{
        if(this->toFloat() > rhs.toFloat())
            return (1);
        else
            return(0);
    }
	//[<]
	bool	Fixed::operator<(Fixed const & rhs) const{
        if(this->toFloat() < rhs.toFloat())
            return (1);
        else
            return(0);     
    }
	//[<=]
	bool	Fixed::operator<=(Fixed const & rhs) const{
        if(this->toFloat() <= rhs.toFloat())
            return (1);
        else
            return(0);  
    }
	//[>=]
	bool	Fixed::operator>=(Fixed const & rhs) const{
        if(this->toFloat() >= rhs.toFloat())
            return (1);
        else
            return(0);  
    }
	//[==]
	bool	Fixed::operator==(Fixed const & rhs) const{
        if(this->toFloat() == rhs.toFloat())
            return (1);
        else
            return(0); 
    }
	//[!=]
	bool	Fixed::operator!=(Fixed const & rhs) const{
        if(this->toFloat() != rhs.toFloat())
            return (1);
        else
            return(0); 
    }
	//Arithmatic operator

	//[+]
	Fixed	Fixed::operator+(Fixed const & rhs) const{

        return (Fixed((this->toFloat() + rhs.toFloat()))); 
    }
    //[-]
	Fixed	Fixed::operator-(Fixed const & rhs) const{
        return (Fixed((this->toFloat() - rhs.toFloat()))); 
    }
	//[*]
	Fixed	Fixed::operator*(Fixed const & rhs) const{
       return (Fixed(this->toFloat() * rhs.toFloat())); 
    }
	//[/]
	Fixed	Fixed::operator/(Fixed const & rhs) const{
        return (Fixed(this->toFloat() / rhs.toFloat())); 
    }

	//Increment/Decrement
	//[++i]
	Fixed	& Fixed::operator++(){ 
       this->_fixedPointNumber += 1; 
       return(*this); 
    }
	//[i++]
	Fixed	Fixed::operator++(int){
        Fixed   temp = *this;
        this->_fixedPointNumber += 1;
        return(temp);
    }
	//[--i]
	Fixed	& Fixed::operator--(){
        this->_fixedPointNumber -= 1;
       return(*this); 
    }
	//[i--]
	Fixed	Fixed::operator--(int){
        Fixed   temp = *this;
        this->_fixedPointNumber -= 1;
        return(temp);
    }

	//overload min/max
	//[min]
	Fixed & Fixed::min(Fixed & a, Fixed & b){
        if(a._fixedPointNumber < b._fixedPointNumber)
            return(a);
        else
            return(b);
    }
	//[min] const
	const Fixed & Fixed::min(Fixed const & a, Fixed const & b){
        if(a._fixedPointNumber < b._fixedPointNumber)
            return(a);
        else
            return(b);
    }
	//[max]
	Fixed & Fixed::max(Fixed & a, Fixed & b){
        if(a._fixedPointNumber > b._fixedPointNumber)
            return(a);
        else
            return(b);
    }
	//[max] const
	const Fixed & Fixed::max(Fixed const & a, Fixed const & b){
        if(a._fixedPointNumber > b._fixedPointNumber)
            return(a);
        else
            return(b);
    }

std::ostream  & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return (o);
}



