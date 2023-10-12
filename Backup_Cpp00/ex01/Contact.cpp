/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:29:16 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/06 11:06:30 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    std::cout << "Contact -> Constructor has called.!!!" << std::endl;
    _first_name.clear();
    _last_name.clear();
    _nickname.clear();
    _phone_number.clear();
    _darkest_secret.clear();
}
Contact::~Contact(void)
{
    std::cout << "Contact -> Destructor has called.!!!" << std::endl;
}
bool Contact::isNumber(const std::string s)
{
      for (unsigned long i = 0; i < s.length(); i++) {
        if (std::isdigit(s[i]) == 0) 
            return false;
    }
    return true;   
}
void Contact::put_data(void)
{
        while(1)
        {
                std::cout << YELLOW << "firstname : " << RESET;
                getline(std::cin, _first_name);
                if (!_first_name.empty())
                        break;
                std::cout << RED << "This is cannot be empty." << RESET << std::endl;
        }
        std::cin.clear();
        while(1)
        {
                std::cout << YELLOW << "lastname : " << RESET;
                getline(std::cin, _last_name);
                if (!_last_name.empty())
                        break;
                std::cout << RED << "This is cannot be empty." << RESET << std::endl;
        }
        std::cin.clear();
        while(1)
        {
                std::cout << YELLOW << "nickname : " << RESET;
                getline(std::cin, _nickname);
                 if (!_nickname.empty())
                        break;
                std::cout << RED << "This is cannot be empty." << RESET << std::endl;
        }
        std::cin.clear();
        while(1)
        {
                std::cout << YELLOW << "phone number : " << RESET;
                getline(std::cin, _phone_number);
                if (isNumber(_phone_number) && _phone_number.length() < 20 && !_phone_number.empty())
                        break;
                std::cout << RED << "This is not valid phone number." << RESET << std::endl;
        }
        std::cin.clear();
        while(1)
        {
                std::cout << YELLOW << "darkest secret : " << RESET;
                getline(std::cin, _darkest_secret);
                if (!_darkest_secret.empty())
                        break;
                std::cout << RED << "This is cannot be empty." << RESET << std::endl;
        }
        std::cin.clear();
}
std::string Contact::get_fname(void)
{
        return(_first_name);
}
std::string Contact::get_lname(void)
{
        return(_last_name);
}
std::string Contact::get_nname(void)
{
        return(_nickname);
}
std::string Contact::get_pnumber(void)
{
        return(_phone_number);
}
std::string Contact::get_dsecret(void)
{
        return(_darkest_secret);
}