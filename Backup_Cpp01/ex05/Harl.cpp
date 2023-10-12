/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:16:43 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/20 21:04:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
    std::cout << "<Harl: constructor is created.>" << std::endl << std::endl;
}

Harl::~Harl( void )
{
    std::cout << std::endl;
    std::cout << "<Harl: Destructor is destroy.>" << std::endl;
}
void	Harl::debug( void )
{
    std::cout << PURPLE << "[DEBUG] " << RESET << std::endl
    << "I love having extra bacon for my " 
    << "7XL-double-cheese-triple-pickle-special- ketchup burger." 
    << " I really do!" << std::endl;
}
void	Harl::info( void )
{
    std::cout << GREEN << "[INFO] "<< RESET << std::endl
    << "I cannot believe adding extra bacon costs more money." 
    << " You didn’t put enough bacon in my burger! If you did," 
    << " I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
    std::cout << YELLOW << "[WARNING] " << RESET << std::endl
    << "I think I deserve to have some extra bacon for free." 
    << " I’ve been coming for years whereas " 
    << "you started working here since last month." << std::endl;
}
void	Harl::error( void )
{
    std::cout << RED << "[ERROR] " << RESET << std::endl
    << RED << "This is unacceptable! " 
    << "I want to speak to the manager now." << RESET << std::endl;
}
void	Harl::complain(std::string level)
{
   void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

   std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
   
   for(int i = 0; i < 4; ++i)
   {
        if(levels[i].compare(strUpper(level)) == 0)
            (this->*ptr[i])();
   }
}
std::string	 Harl::strUpper(std::string str)
{
    std::string upstr;
    upstr = "";
    for(unsigned int i = 0; i < str.length() ; ++i)
    {
     upstr.push_back(std::toupper( str[i]) );   
    }
    return(upstr);    
}