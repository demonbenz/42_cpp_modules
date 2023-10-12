/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/06 17:18:00 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define	ICE_HPP

#include <string>
#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		//AMateria();
		Ice();
		Ice(std::string const & type);
		~Ice();
		//virtual void	 makeSound() const;

		//copy constructor and operator overload funct
		Ice(Ice const & rhs);
		Ice & operator=(Ice const & rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
