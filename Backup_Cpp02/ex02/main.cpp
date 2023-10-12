/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/23 20:44:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

//----------------------------------------//
// my experiment to test each of operator overload

// Fixed a;
// Fixed c;
// Fixed d;
// Fixed e;
// Fixed const x(50);
// Fixed const y(32);
// std::cout << "x = " << x << std::endl;
// std::cout << "y = " << y << std::endl;
// a = x + y;
// std::cout << "a = " << a << std::endl;
// c = x - y;
// std::cout << "c = " << c << std::endl;
// d = x * y;
// std::cout << "d = " << d << std::endl;
// e = x / y;
// std::cout << "e = " << e << std::endl;
// std::cout << "x > y = " << (x > y) << std::endl;
// std::cout << "y > x = " << (y > x) << std::endl;
// std::cout << "x >= y = " << (x >= y) << std::endl;
// std::cout << "y >= x = " << (y >= x) << std::endl;
// std::cout << "x == y = " << (x == y) << std::endl;
// std::cout << "x != y = " << (x != y) << std::endl;
// c++;
// std::cout << "c = " << c << std::endl;
// ++c;
// std::cout << "c = " << c << std::endl;
// std::cout << Fixed::min(a, c) << std::endl;
// std::cout << Fixed::min(x, y) << std::endl;
// std::cout << Fixed::max(a, c) << std::endl;
// std::cout << Fixed::max(x, y) << std::endl;

return(0);
}