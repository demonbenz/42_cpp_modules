/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/03 16:09:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
    DiamondTrap    dim("Dim");
    dim.whoAmI();
    dim.showStatus();
    
    dim.attack("bob");
    dim.attack("bob");
    dim.attack("bob"); 
    dim.showStatus();
    
    dim.takeDamage(15);
    dim.takeDamage(15);
    dim.takeDamage(15);
    dim.takeDamage(15); 
    dim.showStatus();
    
    dim.beRepaired(5);
    dim.beRepaired(5);
    dim.beRepaired(5);
    dim.beRepaired(5);
    dim.showStatus();
    
    dim.highFivesGuys();
    dim.guardGate();
    dim.whoAmI();

//  C++, when the virtual keyword is followed by the class name (e.g., virtual ClassName),
//  it is an indication that you are defining a virtual base class. 
//  This means that you intend to create a base class that may be inherited by multiple derived classes, 
//  and you want to ensure that there is only one instance of the base class in the inheritance hierarchy,
//  even if it is inherited by multiple paths.
//  Multiple Inheritance:
//  Virtual base classes are often used in scenarios involving multiple inheritance, 
//  where a class inherits from more than one base class. Without virtual base classes, 
//  you can encounter the "diamond problem" or "ambiguous base class" problem. 
//  This problem arises when a class inherits from two or more classes that have a common base class. 
//  It can lead to ambiguity in function and data member access.
//  Ambiguity Resolution:
//  To resolve ambiguity in multiple inheritance, you can use virtual base classes.
//  When a base class is declared as virtual, 
//  it ensures that there is only one shared instance of that base class in the derived class,
//  regardless of how many paths inherit from it. 
//  This eliminates ambiguity when accessing members from the virtual base class through the derived class.
//  Syntax:
//  To declare a virtual base class, you use the virtual keyword followed by the base class name when inheriting:
      
return(0);
}