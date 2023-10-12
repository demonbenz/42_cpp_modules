/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:29:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 13:04:50 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Floor.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob; 
	delete me;
	delete src;

	//-----------------------------This is additional equip, unequip test----------------------------//

	// ICharacter* it = new Character("it");

	// IMateriaSource* crystal = new MateriaSource();
	// crystal->learnMateria(new Ice());
	// crystal->learnMateria(new Ice());
	// crystal->learnMateria(new Ice());
	// crystal->learnMateria(new Cure());
	
	// ICharacter* he = new Character("he");
	// AMateria* temp;

	// temp = crystal->createMateria("ice");
	// he->equip(temp);
	// temp = crystal->createMateria("cure");
	// he->equip(temp);
	// he->use(0, *it);
	// he->use(1, *it);
	
	// he->unequip(0);
	// he->unequip(1);
		
	// delete he;
	// delete it;
	// delete crystal;
	
	//-----------------------------This is additional floor test----------------------------//

	// Floor floorA("wood floor");
	// AMateria* ice	= new Ice();
	// floorA.leftOn(ice);
	// Floor floorB(floorA);
	// Floor floorC = floorB;
	// std::cout << "floorA = " << floorA.getType() << std::endl;
	// std::cout << "floorB = " << floorB.getType() << std::endl;
	// std::cout << "floorC = " << floorC.getType() << std::endl;
	// AMateria * tmp;
	// tmp = floorA.getFrom("ice");
	// std::cout << "tmp = " << tmp->getType() << std::endl;
	// delete tmp;
	// tmp = floorB.getFrom("ice");
	// std::cout << "tmp = " << tmp->getType() << std::endl;
	// delete tmp;
	// tmp = floorC.getFrom("ice");
	// std::cout << "tmp = " << tmp->getType() << std::endl;
	// delete tmp;
	
	return(0);	
}
