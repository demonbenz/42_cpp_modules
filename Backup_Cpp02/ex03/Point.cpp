/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:52:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 20:56:42 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	//constructor create assign default value is 0.
	return;
}
Point::Point(float const x, float const y) : _x(x), _y(y)
{
	//constructor create assign default value is in arguement.
	return;
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY()) 
{
	//this._x = src.getX();
	return;
}

Point::~Point()
{
	// This is destructor to destroy it.
	return;
}

Fixed const	Point::getX() const
{
	return(this->_x);
}
Fixed const	Point::getY() const
{
	return(this->_y);
}
Point & Point::operator=(Point const & rhs)
{
	if(this != &rhs)
	{
		const_cast<Fixed &>(_x) = rhs.getX();
		const_cast<Fixed &>(_y) = rhs.getY();
	}
	return(*this);
}

bool	Point::operator==(Point const & rhs) const
{
	if((this->getX() == rhs.getX()))
		return(1);
	else{
		return(0);
	}
}