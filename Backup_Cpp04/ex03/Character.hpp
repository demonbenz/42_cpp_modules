/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/11 22:26:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
#define	CHARACTER_HPP
#include "ICharacter.hpp"
// #include "AMateria.hpp"
#include "Floor.hpp"
#include <string>

//class Floor;
class	Character : public ICharacter
{
	private:
		std::string _name;
		AMateria*	_inventory[4];
		Floor	floor;
	public:
		Character();
		Character(std::string const & name);
		virtual ~Character();

		//copy constructer and operater overload functions.
		Character(Character const & rhs);
		Character & operator=(Character const& rhs);
		
		virtual std::string const & getName() const; 
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);	
};

#endif
