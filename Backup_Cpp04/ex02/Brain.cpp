/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:48:24 by otangkab          #+#    #+#             */
/*   Updated: 2023/10/04 16:55:28 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor start." << std::endl;
	return;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor destroy." << std::endl;
	return;
}

Brain::Brain(Brain const & rhs)
{
	*this = rhs;
	return;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; ++i)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return(*this);
}

std::string Brain::getIdea(int i) const
{
	if ((i >= 0) && (i < 100))
	{
		return(this->_ideas[i]);
	}
	else
	{
		std::cout << "their is out of range[i]" << std::endl;
		return(NULL);	
	}
}
void Brain::setIdea(int i, std::string idea)
{
	if ((i >= 0) && (i < 100))
	{
		this->_ideas[i] = idea;
		return;
	}
	else{
		std::cout << "their is out of range[i]" << std::endl;
		return;
	}
}