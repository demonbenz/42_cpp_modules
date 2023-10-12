/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 20:34:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<iostream>
#include<string>
#include "ClapTrap.hpp"

#define RED 	"\033[0;31m"
#define GREEN 	"\033[0;32m"
#define YELLOW 	"\033[0;33m"
#define PURPLE 	"\033[0;35m"
#define RESET 	"\033[0m"

class	ScavTrap : public ClapTrap
{

public:
	// This is called "overload constructor" that is property of plymorphism in c++. 
	ScavTrap(void);
	ScavTrap(std::string name);

	// Destructor call
	~ScavTrap(void);

	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);
	// functions
	void attack(const std::string& target);
	void guardGate();
};

#endif
