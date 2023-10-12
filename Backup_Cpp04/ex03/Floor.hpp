/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:53:26 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/11 21:39:03 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

#define NUM 10

class	Floor
{
	private:
		std::string	_type;
		AMateria*	_thing[NUM];
	public:
		// constructor
		Floor();
		Floor(std::string type);

		// destructor
		~Floor();
		
		// copy constructor & operator overload funct
		Floor(Floor const & rhs);
		Floor & operator=(Floor const & rhs);

		// this is save address functions.
		void leftOn(AMateria * m);
		AMateria * getFrom(std::string const materia);

		// setter & getter.
		void setType(std::string type);
		std::string getType();
};

#endif
