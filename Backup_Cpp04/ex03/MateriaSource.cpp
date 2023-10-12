/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/12 00:20:43 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	// std::cout << "Constructor MateriaSource create." << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		this->_materia[i] = NULL;
	}
	return;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Destructor MateriaSource destroy." << std::endl;
	for(int i = 0; i < 4 ; i++)
	{
		if (this->_materia[i] != NULL)
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}	
	}
	return;
}
void MateriaSource::learnMateria(AMateria* m)
{
	if(!m)
		return;
	for(int i = 0; i < 4; i++)
	{
		if(!this->_materia[i])
		{
			this->_materia[i] = m;
			return;
		}
	}
	delete m; // This line use in case learn more than 4 slot
	return;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) 
	{
        if (this->_materia[i] && this->_materia[i]->getType() == type) {
			// std::cout << "Create (clone) "<< type << " to materia from index " << "[" << i << "]" << std::endl;
            return this->_materia[i]->clone();
        }
    }	
	std::cout << "Error :Can't get type of material. type = " << type << std::endl;
	return(NULL);
}