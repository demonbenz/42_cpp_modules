/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 16:39:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap    bob("Bob"); 
    bob.showStatus();
    ClapTrap    ham;
    ham = bob;
    ham.setName("Ham");
    ham.showStatus(); 
    ClapTrap    mari(bob); 
    mari.setName("Mari");
    mari.showStatus();
    ham.powerUp(10);
    ham.attack("Mari");
    mari.takeDamage(10);
    mari.showStatus();
    bob.showStatus();
    ham.showStatus();
    bob.powerUp(2);
    ham.setHp(27);
    for(int i = 0; i < 10; i++)
    {
        bob.attack("Ham");
        ham.takeDamage(2); 
    }
    bob.showStatus();
    ham.showStatus(); 
      
return(0);
}