/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/21 12:18:20 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// this is zombie "Foo" creat in stack
	Zombie	foo = Zombie("Foo");
	foo.announce();

	std::cout << "----------------------------------------" << std::endl;
	
	// this is zombie "bar" create in heap by use newZombie function
 
	Zombie	*bar = new Zombie("Bar");
	bar->announce();
	delete bar;
	
	// this is zombie "Muf" create in heap too by use randomChump function
	//but it use new and delete inside function.
 
	std::cout << "----------------------------------------" << std::endl;
	
	randomChump("Muf");
	return(0);
}
