/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 16:50:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<string>

#define RED 	"\033[0;31m"
#define GREEN 	"\033[0;32m"
#define YELLOW 	"\033[0;33m"
#define PURPLE 	"\033[0;35m"
#define RESET 	"\033[0m"

class	ClapTrap
{
protected:
	std::string	_name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
public:
	// This is called "overload constructor" that is property of plymorphism in c++. 
	ClapTrap(void);
	ClapTrap(std::string name);

	// This is called copy constructor.
	ClapTrap(ClapTrap const & src);

	// Destructor call
	~ClapTrap(void);

	// functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// extra function to add attack damage and show status.
	void powerUp(int amount);
	void showStatus(void);
	
	// Getter and setter function.
	std::string getName( void ) const;
	void setName(std::string const name);
	int getHp( void );
	void setHp(int const hitPoint);
	int getEp( void );
	void setEp(int const energyPoint);
	int getAd( void );
	void setAd(int const attackDamage);

	// This is called operator overload function.
	//[=]
	ClapTrap & operator=(ClapTrap const & rhs);
};

#endif
