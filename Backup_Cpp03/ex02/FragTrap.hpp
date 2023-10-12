/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 20:55:14 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{

public:
	// This is called "overload constructor" that is property of plymorphism in c++. 
	FragTrap(void);
	FragTrap(std::string name);

	// Destructor call
	~FragTrap(void);
	
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

	// functions
	void highFivesGuys(void);
};

#endif
