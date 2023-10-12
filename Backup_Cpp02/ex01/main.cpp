/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 19:19:59 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
Fixed a;
Fixed const b( 10 ); 
Fixed const c( 42.42f ); 
Fixed const d( b );

a = Fixed( 1234.4321f );

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;

std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;

//now this is my experimental code. It will present the limited of Fixed-point number that
//will overflow if you input the value that over limit _fixedPointNumber can keep.

// std::cout << PURPLE << "-----------------------------" << std::endl;
// std::cout << "Limited experiment constructor" << std::endl;
// Fixed e;
// std::cout << "e is " << e << std::endl;
// Fixed   const   f( INT_MAX );
// Fixed   const   g( INT_MIN );
// std::cout << "assign value " << INT_MAX << " to f is " << f << " but f.toInt() = " << f.toInt() << std::endl;
// std::cout << "assign value " << INT_MIN << " to g is " << g << " but g.toInt() = " << g.toInt() << std::endl;

// Fixed   const   h(8388607);
// std::cout << "h.getRawBits = " << h.getRawBits() << std::endl;
// std::cout << "h is " << h << " but h.toInt() = " << h.toInt() << std::endl;

// Fixed   const   i(-8388608);
// std::cout << "i.getRawBits = " << i.getRawBits() << std::endl;
// std::cout << "i is " << i << " but i.toInt() = " << i.toInt() << RESET << std::endl;

return(0);
}