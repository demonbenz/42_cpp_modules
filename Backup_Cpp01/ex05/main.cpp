/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:19:12 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/20 20:52:08 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl_obj;

	harl_obj.complain("debug");
	harl_obj.complain("info");
	harl_obj.complain("warning");
	harl_obj.complain("error");
	
	return(0);
}
