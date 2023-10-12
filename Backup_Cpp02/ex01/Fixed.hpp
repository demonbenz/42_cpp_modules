/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 19:18:16 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<string>
#include<cmath>

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
	// This is called "oveerload constructor" that is property of plymorphism in c++. 
	Fixed(void);
	Fixed(int const integer);
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
	Fixed & operator=(Fixed const & rhs);

};

std::ostream  & operator<<(std::ostream & o, Fixed const & rhs);

#endif
