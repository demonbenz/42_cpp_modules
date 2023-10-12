/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:51:00 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/15 16:25:17 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
     std::cout << "Phonebook -> Constructor has called.!!!" << std::endl;
        _i = 0;
        return;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Phonebook -> Destructor has called.!!!" << std::endl;
    return;
}

void PhoneBook::add(void)
{
            if(_i >= 8)
                _i = 0;
            std::cout << GREEN << "input contact info -> index [" << _i + 1 << "]" << RESET
            << std::endl; 
            _contact[_i].put_data(); 
            _i++; 
}

int	stringToint(std::string str)
{
	int	i;
	
	i = atoi(str.c_str());

	return(i);
}

void PhoneBook::search(void)
{
    //check is contact list is not empty
    if(_contact[0].get_fname().empty())
    {
        std::cout << RED << "Contact is empty." << RESET << std::endl;
        return;
    }
    // show table of all contact list.
        //write table head.
        std::cout << PURPLE;
        std::cout << "---------------------------------------------------------" << std::endl;
        std::cout << "| " << std::setw(11) << "index" << " | ";
        std::cout << std::setw(11) << "firstname" << " | ";
        std::cout << std::setw(11) << "lastname" << " | ";
        std::cout << std::setw(11) << "nickname" << " |" << std::endl;
        std::cout << "---------------------------------------------------------" << std::endl;
        //write data inside.
        for (int i = 0; i < 8; i++)
        {
            std::cout << "| " << std::setw(11) << i + 1;
            std::cout << " | ";
            if(_contact[i].get_fname().length() > 10)
            {
                std::cout << _contact[i].get_fname().substr(0, 10) << ".";
            }
            else
                std::cout << std::setw(11) << _contact[i].get_fname();
            std::cout << " | ";
            if(_contact[i].get_lname().length() > 10)
            {
                std::cout << _contact[i].get_lname().substr(0, 10) << ".";
            }
            else
                std::cout << std::setw(11) << _contact[i].get_lname();
            std::cout << " | ";
            if(_contact[i].get_nname().length() > 10)
            {
                std::cout << _contact[i].get_nname().substr(0, 10) << ".";
            }
            else
                std::cout << std::setw(11) << _contact[i].get_nname();
            std::cout << " | " << std::endl;
        }
        std::cout << "---------------------------------------------------------" << std::endl;
        std::cout << RESET;
    std::string id_str;
    while(1)
    {
        std::cout << GREEN << "input search index number (1 - 8):" << std::endl
        << "Type '0' for exit search mode:" << std::endl << YELLOW << "index : " << RESET;
        getline(std::cin, id_str);
        // key the number instead charactor
        if (id_str.empty() || !_contact[_i].isNumber(id_str) || id_str.length() > 1)
        {
            std::cout << RED 
            << "Error number (Not valid number). Please input index number." << RESET 
            << std::endl;
            continue;
        }
        _index = stringToint(id_str);
        if (_index <= 8 && _index >= 1)
        {
            //show info of data inside phonebook.
            if(_contact[_index - 1].get_fname().empty())
            {
                std::cout << RED << "No contact data index[" << _index 
                << "] in this list." << RESET << std::endl;
                continue; 
            }
            else{
                std::cout << CYAN;
                std::cout << "-----------------------------------------------------" << std::endl;
                std::cout << GREEN;
                std::cout << "index          : " << _index << std::endl;
                std::cout << "firstname      : " << _contact[_index - 1].get_fname() << std::endl;
                std::cout << "lastname       : " << _contact[_index - 1].get_lname() << std::endl;
                std::cout << "nickname       : " << _contact[_index - 1].get_nname() << std::endl;
                std::cout << "phone number   : " << _contact[_index - 1].get_pnumber() << std::endl;
                std::cout << "darkest secret : " << _contact[_index - 1].get_dsecret() << std::endl;
                std::cout << CYAN;
                std::cout << "-----------------------------------------------------" << std::endl;
                std::cout << RESET;
                continue;
            }
        }
        else if (_index == 0)
        {
            break;
        }
        else
        {
            std::cout << RED <<"Error: your input index number is wrong.!!!" << WHITE << std::endl;
        }
    } 
}
