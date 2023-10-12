/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/05 19:46:00 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AANIMAL_HPP
#define	AANIMAL_HPP

#include <string>

class	AAnimal // This part of class To be convention form add 'A' to prefix class name
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string type);
		virtual ~AAnimal();
		virtual void	 makeSound()=0; // This is called pure virtual function to make this class is abstrac class

		//copy constructor and operator overload funct
		AAnimal(AAnimal const & rhs);
		AAnimal & operator=(AAnimal const & rhs);

		//getter and setter
		std::string getType() const;
		void setType(std::string type);
};

#endif
