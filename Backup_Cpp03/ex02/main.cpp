/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 18:27:41 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
    FragTrap    jim("Jim");
    jim.showStatus();
    
    jim.attack("bob");
    jim.attack("bob");
    jim.attack("bob"); 
    jim.showStatus();
    
    jim.takeDamage(15);
    jim.takeDamage(15);
    jim.takeDamage(15);
    jim.takeDamage(15); 
    jim.showStatus();
    
    jim.beRepaired(5);
    jim.beRepaired(5);
    jim.beRepaired(5);
    jim.beRepaired(5);
    jim.showStatus();
    
    jim.highFivesGuys();
      
return(0);
}