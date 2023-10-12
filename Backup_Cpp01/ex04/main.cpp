/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:30:04 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/25 19:47:32 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>
#include "SedFile.hpp"
#include <unistd.h>

int main(int argc, char* argv[])
{
    
    std::string str;
    std::string str1;
    std::string str2;
    //check input arguement.
    if(argc > 4 || argc < 4)
    {
        std::cerr << "Error input: Arguement is not in the condition." << std::endl;
        std::cerr << "Arguement should be ./SedIsForLosers filename s1 s2" << std::endl;
        return(1);
    }
    if(strcmp(argv[1],"") == 0 || strcmp(argv[2],"") == 0 || strcmp(argv[3],"") == 0)
    {
        std::cout << "Error input: Not allow "" input." << std::endl;
        return(1);
    }
	if(access(argv[1], F_OK) == -1)
	{
        std::cout << "Error input: File can't  access." << std::endl;
		return(-1);
	}
    SedFile file_o = SedFile(argv[1]);
    str = file_o.getName();
    str1 = file_o.getData();
    str2 = file_o.findAndReplace(file_o.getData(), argv[2], argv[3]);
    // std::cout << "-------------------------------------------------" << std::endl;
    // std::cout << "filename : "<< str << std::endl;
    // std::cout << "-------------------------------------------------" << std::endl;
    // std::cout << "data from readfile : "<< std::endl;
    // std::cout << "-------------------------------------------------" << std::endl;
    // std::cout << str1 << std::endl;
    // std::cout << "-------------------------------------------------" << std::endl;
    // std::cout << "data frome replace char :" << std::endl;
    // std::cout << "-------------------------------------------------" << std::endl;
    // std::cout << std::endl << str2 << std::endl;
    // std::cout << "-------------------------------------------------" << std::endl;
    file_o.writeFile(file_o.getName() + ".replace", str2);
    
    return(0);
}
