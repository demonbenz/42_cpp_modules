/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 18:00:48 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
    ScavTrap    kim("Kim");
    kim.showStatus();
    
    kim.attack("bob");
    kim.attack("bob");
    kim.attack("bob"); 
    kim.showStatus();
    
    kim.takeDamage(15);
    kim.takeDamage(15);
    kim.takeDamage(15);
    kim.takeDamage(15); 
    kim.showStatus();
    
    kim.beRepaired(5);
    kim.beRepaired(5);
    kim.beRepaired(5);
    kim.beRepaired(5);
    kim.showStatus();
    
    kim.guardGate();
      
return(0);
}