/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 16:44:21 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#define PURPLE "\033[0;35m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int	main(void)
{
	std::string	stringVar = "HI THIS IS BRAIN";
	std::string* stringPTR;
	stringPTR = &stringVar;
	std::string &stringREF = stringVar;


	std::cout << PURPLE << "Memory address" << RESET << std::endl;
	std::cout << "Memory address of stringVar : " << GREEN << &stringVar << RESET << std::endl;
	std::cout << "Memory address held by stringPTR : " << GREEN << stringPTR << RESET << std::endl;
	std::cout << "Memory address held by stringREF : " << GREEN << &stringREF << RESET << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << PURPLE << "Value in variable" << RESET << std::endl;
	std::cout << "Value of stringVar : " << GREEN << stringVar << RESET << std::endl;
	std::cout << "The value pointed to by stringPTR : " << GREEN << *stringPTR << RESET << std::endl;
	std::cout << "The value pointed to by stringREF : " << GREEN << stringREF << RESET << std::endl;	
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << PURPLE << "change value from stringPTR" << RESET << std::endl;
	*stringPTR = "There is no brain.";
	std::cout << "Value of stringVar : " << stringVar << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	std::cout << PURPLE << "change value from stringREF" << RESET << std::endl;
	stringREF = "YUMM YUMM BRAIN IS YUMMY.";
	std::cout << "Value of stringVar : " << stringVar << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	return(0);
}