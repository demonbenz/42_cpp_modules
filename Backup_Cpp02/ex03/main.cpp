/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 21:06:56 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{

Point   a = Point(0, 0);
Point   b = Point(5, 6);
Point   c = Point(5, 0);
Point   point = Point(1.678, 0.125);

if(bsp(a, b, c, point) == 0)
    std::cout << RED << "Point is not in triangle area.!!!" << RESET << std::endl;
else{
    std::cout << GREEN << "Point is inside triangle area indeed." << RESET << std::endl;
}
return(0);
}