/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/06 17:49:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include <string>
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const & type);
		~Cure();
		
		//copy constructor and operator overload funct
		Cure(Cure const & rhs);
		Cure & operator=(Cure const & rhs);

		virtual AMateria * clone() const;
		virtual void use(ICharacter& target);
};

#endif
