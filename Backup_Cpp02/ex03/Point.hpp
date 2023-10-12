/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:49:21 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/27 20:56:52 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
			Fixed	const _x;
			Fixed	const _y;
	public:
		Point();
		Point(float const x, float const y);
		//copy constructor	
		Point(Point const & src);	
		~Point();
	
		Fixed	const getX() const;
		Fixed	const getY() const;	
		Point & operator=(Point const & rhs);

	//operator overload;
	bool	operator==(Point const & rhs) const;
	
		
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

