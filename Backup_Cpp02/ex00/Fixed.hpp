/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/22 18:33:29 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<string>

class	Fixed
{
private:
	int	_fixedPointNumber;
	static int const _fractionalBits;
public:
	Fixed(void);
	~Fixed(void);
	// This is called copy constructor.
	Fixed(Fixed & src);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	// This is called operator overload function.
	Fixed & operator=(Fixed & rhs);
};
#endif
