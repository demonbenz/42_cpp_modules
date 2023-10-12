/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 14:58:26 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	num;
	
	num = 5;
	// this is hoard of Zombies.
	std::cout << "----------------------------------------" << std::endl;	
	Zombie* group_a = zombieHorde( num, "The hulk." );
	for(int i = 0; i < num ; ++i)
		group_a[i].announce();

	delete [] group_a;
	std::cout << "----------------------------------------" << std::endl;
	return(0);	
}
