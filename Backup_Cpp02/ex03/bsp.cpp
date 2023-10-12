/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:55:40 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 21:05:26 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
    float   totalArea;
    float   pabArea;
    float   pbcArea;
    float   pcaArea;
    Fixed   rawSquareArea;
    
    std::cout << PURPLE << "a     ["<< a.getX() << ", " << a.getY() << "]" << std::endl;
    std::cout << "b     ["<< b.getX() << ", " << b.getY() << "]" << std::endl;
    std::cout << "c     ["<< c.getX() << ", " << c.getY() << "]" << std::endl;
    std::cout << "point ["<< point.getX() << ", " << point.getY() << "]" << RESET << std::endl;
    
    if(point == a)
    {
      std::cout << YELLOW << "Point is on Vector a." << RESET << std::endl;  
      return(0);
    }
    if(point == b)
    {
      std::cout << YELLOW << "Point is on Vector b." << RESET << std::endl;  
      return(0);
    }
    if(point == c)
    {
      std::cout << YELLOW << "Point is on Vector c." << RESET << std::endl;  
      return(0);
    }
    //Calculate total Area.
    rawSquareArea = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
    totalArea = abs(rawSquareArea.toFloat()) / 2.000f; 
    
    std::cout << "totalArea =   "<< totalArea << std::endl;
    
    //Calculate each traingle area(pab)(pbc)(pca);
    rawSquareArea = ((point.getX() * (a.getY() - b.getY())) + (a.getX() * (b.getY() - point.getY())) + (b.getX() * (point.getY() - a.getY())));
    pabArea = abs(rawSquareArea.toFloat()) / 2.000f; 
    
    std::cout << "pabArea =     "<< pabArea << std::endl;
    if(pabArea == 0)
    {    
        std::cout << YELLOW << "point is on the edge line a-b." << RESET << std::endl;
        return(0);
    }
    rawSquareArea = ((point.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - b.getY())));
    pbcArea = abs(rawSquareArea.toFloat()) / 2.000f; 
    
    std::cout << "pbcArea =     "<< pbcArea << std::endl;
    if(pbcArea == 0)
    { 
        std::cout << YELLOW << "point is on the edge line b-c." << RESET << std::endl;
        return(0);
    }
    
    rawSquareArea = ((point.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - point.getY())) + (a.getX() * (point.getY() - c.getY())));
    pcaArea = abs(rawSquareArea.toFloat()) / 2.000f; 
    
    std::cout << "pcaArea =     "<< pcaArea << std::endl;
    if(pcaArea == 0)
    { 
        std::cout << YELLOW << "point is on the edge line c-a." << RESET << std::endl;
        return(0);
    }

   if(totalArea == (pabArea + pcaArea + pbcArea))
   {
        return(1);
   }
   else 
        return (0);
}