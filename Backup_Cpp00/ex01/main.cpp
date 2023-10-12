/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:31:29 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/13 16:33:41 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

int main(void)
{
    std::string input_cmd;
   PhoneBook phonebook;
    
    while(1)
    {
        std::cout << GREEN << "key input command : (ADD, SEARCH, EXIT) " << std::endl;
        std::cout << YELLOW << "command : " << RESET;
        getline(std::cin, input_cmd); 
       for(int i = 0; i < (int)input_cmd.length() ; i++)
        {
           input_cmd[i] = std::toupper(input_cmd[i]);
        }
        if (input_cmd.compare("ADD") == 0 || input_cmd.compare("SEARCH") == 0 || input_cmd.compare("EXIT") == 0)
        {
            if (input_cmd.compare("ADD") == 0)
            {
                phonebook.add(); 
            }   
            else if (input_cmd.compare("SEARCH") == 0)
            {
                phonebook.search();
            }
            else if ((input_cmd.compare("EXIT") == 0))
            {
                break;
            }
        }
        else
        {
            std::cout << RED << "Error input is not in instruction.!" << WHITE << std::endl;
        }
    }   
    return(0);
}
