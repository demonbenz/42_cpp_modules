/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:06:23 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 19:48:12 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP
#include<string>
#include<iostream>
#include"Weapon.hpp"

#define PURPLE "\033[0;35m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon& weapon_name);
		void	attack(void);
	private:
		std::string	_name;
		Weapon*	_weapon;
};

#endif
