/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/04 15:31:25 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl; 
std::cout << i->getType() << " " << std::endl; 
i->makeSound(); //will output the cat sound! 
j->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
std::cout << "----------wrong test-------------" << std::endl;
const WrongAnimal * wrong = new WrongAnimal();
const WrongAnimal * k = new WrongCat();
std::cout << wrong->getType() << std::endl;
std::cout << k->getType() << std::endl;
wrong->makeSound();
k->makeSound();
delete wrong;
delete k;
	return(0);
}
