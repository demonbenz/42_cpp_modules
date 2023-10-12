/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:18:00 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 14:43:27 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie  *zom = new Zombie(name);
    zom->announce();
    delete zom;
    return;
}
