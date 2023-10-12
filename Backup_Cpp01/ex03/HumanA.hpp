/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:03:59 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 19:10:48 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define	HUMANA_HPP
#include<string>
#include<iostream>
#include"Weapon.hpp"

#define PURPLE "\033[0;35m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon_name);
		~HumanA();
		void	attack(void);
	private:
		std::string	_name;
		Weapon& _weapon;
};

#endif
