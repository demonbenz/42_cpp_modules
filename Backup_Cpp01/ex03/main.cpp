/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/23 18:12:28 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#define PURPLE "\033[0;35m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
	Weapon club = Weapon("crude spiked club");
	
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club"); 
	bob.attack();
	} 
	{
	Weapon club = Weapon("crude spiked club");
	
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club"); 
	jim.attack();
	}
	//HumanB	Jo("Jo");
	//Jo.attack();
	return(0);
}
