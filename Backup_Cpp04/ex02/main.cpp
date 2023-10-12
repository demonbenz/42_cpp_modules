/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/05 19:47:43 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{

// This main cannot Instantiate class AAnimal because it is abstrac class.

// Dog k;
// k.makeSound();

const AAnimal* j = new Dog(); 
const AAnimal* i = new Cat();

delete j;
delete i;

std::cout << std::endl;
std::cout << "----this is test for Array of Animal object part-----" << std::endl;
std::cout << std::endl;

unsigned int	num;
num = 6;
AAnimal *hybrid[num];
for(unsigned int i = 0; i < num; i++)
{
	if(i < (num/2))
	{
		hybrid[i] = new Dog;
	}
	else
		hybrid[i] = new Cat;
}
for(unsigned int i = 0; i < num; i++)
{
	std::cout << std::endl;
	std::cout << "hybrid [" << i << "]" << std::endl;
	std::cout << "hybrid type =  " << hybrid[i]->getType() << std::endl;
	hybrid[i]->makeSound();
	std::cout << std::endl;
}
for(unsigned int i = 0; i < num; i++)
{
	delete hybrid[i];
}	

// std::cout << "----this is copy constructor show deep copy as following-----" << std::endl;
// Dog	wolf;
// for(int i = 0; i < 100 ; i++)
// {
// 	wolf.setBrain(i, "I am Wolf. I stay in forest!!! ");
// }
// Dog	husky = Dog(wolf);
// std::cout << "wolf.getType() = " << wolf.getType() << std::endl; 
// std::cout << "husky.getType() = " << husky.getType() << std::endl;
// husky.getBrain();
// for(int i = 0; i < 100 ; i++)
// {
// 	husky.setBrain(i, "I am dog. My anchester is wolf. But i have to run.!!! ");
// }	
// wolf.makeSound();
// husky.makeSound();
// std::cout << "inside wolf brain." << std::endl;	
// wolf.getBrain();	
// std::cout << "inside husky brain." << std::endl;	
// husky.getBrain();
// std::cout << "----this is operator overload show deep copy as following-----" << std::endl;
// Dog shiba;
// shiba = wolf;
// for(int i = 0; i < 100 ; i++)
// {
// 	shiba.setBrain(i, "I am shiba Inu. I am not bark. I just stay at home and keep look cute.!!! ");
// }
// std::cout << "inside shiba brain." << std::endl;
// shiba.getBrain();
// std::cout << "inside wolf brain." << std::endl;	
// wolf.getBrain();

	return(0);
}
