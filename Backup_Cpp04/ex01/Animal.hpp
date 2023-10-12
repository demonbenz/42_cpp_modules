/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 20:31:04 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		virtual void	 makeSound() const;

		//copy constructor and operator overload funct
		Animal(Animal const & rhs);
		Animal & operator=(Animal const & rhs);

		//getter and setter
		std::string getType() const;
		void setType(std::string type);
};

#endif
