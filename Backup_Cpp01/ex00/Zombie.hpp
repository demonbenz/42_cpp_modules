/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:15:02 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/12 21:28:39 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<string>

class	Zombie
{
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	announce(void);
private:
	std::string	_name;
};

	void	randomChump(std::string	name);
	Zombie*	newZombie(std::string	name);

#endif
