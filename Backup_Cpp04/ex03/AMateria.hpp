/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/06 20:44:17 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();

		//copy constructor and operator overload funct
		AMateria(AMateria const & rhs);
		AMateria & operator=(AMateria const & rhs);

		//getter and setter
		std::string const & getType() const; // return materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
