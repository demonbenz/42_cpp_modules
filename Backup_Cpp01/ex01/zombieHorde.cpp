/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:37:06 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/12 22:12:04 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    Zombie* zom = new Zombie[N];
    for(int i = 0; i < N; ++i)
        zom[i].setName(name);
    return(zom);
}
