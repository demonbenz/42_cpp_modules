/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:01:59 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 19:15:25 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP
#include<iostream>
#include<string>

#define YELLOW "\033[0;33m"
#define RESET "\033[0m"
class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string	getType(void);
		void	setType(std::string type);

	private:
		std::string	_type;
};

#endif
