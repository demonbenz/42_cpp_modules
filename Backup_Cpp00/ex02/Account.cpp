/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:50:35 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/13 18:46:15 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include<iostream>
#include<ctime>

#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define PURPLE  "\033[0;35m"
#define RESET   "\033[0m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
    // Initial private value number and eleminate garbage value
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;  
    
    // Input amount by initial_deposite
    this->_amount += initial_deposit;
    
    // show timestamp
    this->_displayTimestamp();
    
    // Show info when Consyructor created
    std::cout << "index:" << YELLOW << Account::_nbAccounts << RESET
    << ";amount:" << YELLOW << this->_amount << RESET 
    << ";created" << std::endl;
    
    // Add number for account index 
    this->_accountIndex = _nbAccounts;
    Account::_nbAccounts += 1;

    this->checkAmount();
}
Account::Account(void){
    std::cout << "Account constructor(void) is created." << std::endl;
    // Nothing happen in this action after program is run. 
}
Account::~Account(void){
    // Do the ending of log files but in this os it print reverse index list.
    this->_displayTimestamp();
    std::cout << "index:" << YELLOW << this->_accountIndex << RESET;
    std::cout << ";amount:" << YELLOW << this->_amount << RESET;
    std::cout << ";closed" << std::endl;
}
int	Account::getNbAccounts( void ){
   return(_nbAccounts); 
}

int Account::getTotalAmount(void){
   return(_totalAmount);
}

int Account::getNbDeposits(void){
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
    return(_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
   // Display summery account info after deposit or withdraw event.
   Account::_displayTimestamp();
   std::cout << "accounts:" << PURPLE << Account::getNbAccounts() << RESET
   << ";total:" << PURPLE << Account::getTotalAmount() << RESET
   << ";deposits:" << GREEN << Account::getNbDeposits() << RESET
   << ";withdrawals:" << RED << Account::getNbWithdrawals() << RESET
   << std::endl;

   //clear sumary account and reset it all
   Account::_totalAmount = 0;
   Account::_totalNbDeposits = 0;
   Account::_totalNbWithdrawals = 0;
   
}


void    Account::makeDeposit( int   deposit)
{
    //revise value in amount + deposit
    
    this->_displayTimestamp();
    std::cout << "index:" << YELLOW << this->_accountIndex << RESET;
    std::cout << ";p_amount:" << YELLOW << this->_amount << RESET;
    std::cout << ";deposit:" << YELLOW << deposit << RESET;
    
    // add the deposit to amount
    this->_amount = this->_amount + deposit;
    std::cout << ";amount:" << YELLOW << this->_amount << RESET;
    
    this->_nbDeposits += 1;
    this->checkAmount();
    
    std::cout << ";nb_deposits:" << GREEN << this->_nbDeposits << RESET << std::endl;
}
bool    Account::makeWithdrawal( int withdrawal)
{
    //revise value in amount - withdraw
    this->_displayTimestamp();
    std::cout << "index:" << YELLOW << this->_accountIndex << RESET;
    std::cout << ";p_amount:" << YELLOW << this->_amount << RESET;
    std::cout << ";withdrawal:";
    if (this->_amount - withdrawal >= 0)
    {
        std::cout << YELLOW << withdrawal << RESET;
        this->_amount = this->_amount - withdrawal;
        std::cout << ";amount:" << YELLOW << this->_amount << RESET;

        this->_nbWithdrawals += 1;    
        this->checkAmount();
        
        std::cout << ";nb_withdrawals:" << RED << this->_nbWithdrawals << RESET << std::endl;
        return (true);
    }
    else
    {
         this->checkAmount();
         std::cout << "refused" << std::endl;
        return(false);
    }
}
int     Account::checkAmount(void) const
{ 
   Account::_totalAmount += this->_amount;
   Account::_totalNbDeposits += this->_nbDeposits;
   Account::_totalNbWithdrawals += this->_nbWithdrawals;
   return(this->_amount); 
}

void    Account::displayStatus(void) const
{
    // Display details of each account index and status before deposite or withdraw. 
    this->_displayTimestamp();
    std::cout << "index:" << YELLOW << this->_accountIndex << RESET;
    std::cout << ";amount:" << YELLOW << this->_amount << RESET;
    std::cout << ";deposit:" << GREEN << this->_nbDeposits << RESET;
    std::cout << ";withdrawals:" << RED << this->_nbWithdrawals << RESET;
    std::cout << std::endl;
}

time_t  now = time(0);
tm *ltm = localtime(&now);
char    datestring[51];

void    Account::_displayTimestamp(void)
{
   strftime(datestring,50,"%Y%m%d_%H%M%S", ltm);
   std::cout << "[" << YELLOW << datestring << RESET << "] ";
}