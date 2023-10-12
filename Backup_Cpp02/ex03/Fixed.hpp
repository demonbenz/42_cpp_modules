/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 21:00:01 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<string>
#include<cmath>

#define RED 	"\033[0;31m"
#define GREEN 	"\033[0;32m"
#define YELLOW 	"\033[0;33m"
#define PURPLE 	"\033[0;35m"
#define RESET 	"\033[0m"

class	Fixed
{
private:
	int	_fixedPointNumber;
	static int const _fractionalBits;
	
public:
	// This is called "overload constructor" that is property of plymorphism in c++. 
	Fixed(void);
	Fixed(int	const integer);
	Fixed(float const floatingPoint);

	// This is called copy constructor.
	Fixed(Fixed const & src);

	// Destructor call
	~Fixed(void);

	float toFloat( void ) const;
	int toInt( void ) const;
	
	// Getter and setter function.
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	// This is called operator overload function.
	//[=]
	Fixed & operator=(Fixed const & rhs);

	//Comparition operator
	//[>]
	bool	operator>(Fixed const & rhs) const;
	//[<]
	bool	operator<(Fixed const & rhs) const;
	//[<=]
	bool	operator<=(Fixed const & rhs) const;
	//[>=]
	bool	operator>=(Fixed const & rhs) const;
	//[==]
	bool	operator==(Fixed const & rhs) const;
	//[!=]
	bool	operator!=(Fixed const & rhs) const;

	//Arithmatic operator
	//[+]
	Fixed	operator+(Fixed const & rhs) const;
	//[-]
	Fixed	operator-(Fixed const & rhs) const;
	//[*]
	Fixed	operator*(Fixed const & rhs) const;
	//[/]
	Fixed	operator/(Fixed const & rhs) const;

	//Increment/Decrement
	//[++i]
	Fixed	& operator++();
	//[i++]
	Fixed	operator++(int);
	//[--i]
	Fixed	& operator--();
	//[i--]
	Fixed	operator--(int);

	//overload min/max
	//[min]
	static Fixed & min(Fixed & a, Fixed & b);
	//[min] const
	static const Fixed & min(Fixed const & a, Fixed const & b);
	//[max]
	static Fixed & max(Fixed & a, Fixed & b);
	//[max] const
	static const Fixed & max(Fixed const & a, Fixed const & b);

};

std::ostream  & operator<<(std::ostream & o, Fixed const & rhs);

#endif
