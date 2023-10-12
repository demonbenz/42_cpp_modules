/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:19:12 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/20 21:34:12 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char* argv[])
{
	
	if(argc > 2 || argc < 2)
	{
		std::cerr << "Invalid argument input filter." << std::endl;
		return(1);	
	}
	
	Harl	harl_obj;
	
	//harl_obj.complain(argv[1]);
	harl_obj.filter(argv[1]);
	// harl_obj.complain("info");
	// harl_obj.complain("warning");
	// harl_obj.complain("error");
	
	return(0);
}
