/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <otangkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:18:03 by otangkab          #+#    #+#             */
/*   Updated: 2023/09/30 16:44:56 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void) : _name("No name"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << GREEN << "ClapTrap: No name constructor call." << RESET << std::endl;
    return;
}
ClapTrap::ClapTrap(std::string name)
: _name(name) , _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << GREEN << "ClapTrap " << name << " Constructor call with innitialize object data." << RESET << std::endl;
    return;
}
ClapTrap::ClapTrap(ClapTrap const & src) 
//: _name(src._name), _hitPoint(src._hitPoint), _energyPoint(src._energyPoint), _attackDamage(src._attackDamage) 
{   
   
    std::cout << GREEN << "ClapTrap copy constructor call form " << this->_name << " to new object." << RESET << std::endl;
   *this = src;
    return;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << GREEN << "ClapTrap " << this->_name <<" Destructor call." << RESET << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_hitPoint <= 0)
    {
        std::cout << RED << "ClapTrap " << this->_name << " is dead." << RESET << std::endl;
        return;
    }
    if(this->_energyPoint <= 0)
    {
        std::cout << RED << "ClapTrap " << this->_name << " is run out of energy." << RESET << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
    << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoint -= 1;
    return;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoint <= 0)
    {
        std::cout << RED <<"ClapTrap "<< this->_name << " is dead." << RESET << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " has takeDamage " << amount << " damage." << std::endl;
    this->_hitPoint -= amount;
    if(this->_hitPoint <= 0)
    {
        this->_hitPoint = 0;
        std::cout << RED << "ClapTrap "<< this->_name << " is dead."<< RESET << std::endl;
    }
    return;   
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_energyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is run out of energy." << std::endl;
        return;
    }
    if(this->_hitPoint <= 0)
    {
        std::cout << "ClapTrap "<< this->_name << " is dead." << std::endl;
        return;
    }
    std::cout << "ClapTrap "<< this->_name << " repaired " << amount << " unit." 
    << " recover form Hit point = " << this->_hitPoint << " to ";
    this->_hitPoint += amount;
    std::cout << _hitPoint << " hp." << std::endl;
    this->_energyPoint -= 1;
    return;   
}

// extra function to add attack damage.
void ClapTrap::powerUp(int amount)
{
    std::cout << "ClapTrap " << this->_name << " is power up, So ";
    std::cout << "attack damage from "<< this->_attackDamage << " to " ;
    this->_attackDamage += amount;
    std::cout << this->_attackDamage << " unit." << std::endl;
    return;
}
// extra function show status.
void ClapTrap::showStatus(void)
{
    std::cout << std::endl;
    std::cout << YELLOW << "--------------status--------------" << std::endl;
    std::cout << "ClapTrap name : " << this->_name << std::endl;
    std::cout << "hit point     : " << this->_hitPoint << std::endl;
    std::cout << "energy point  : " << this->_energyPoint << std::endl;
    std::cout << "attack damage : " << this->_attackDamage << YELLOW << std::endl;
    if(this->_hitPoint <= 0)
    {
        std::cout << RED <<"Already dead. " << RESET << std::endl;
    }
    if(this->_energyPoint <= 0)
    {
        std::cout << RED <<"Run out of energy. " << RESET << std::endl;
    }
    std::cout << YELLOW << "--------------status--------------" << RESET << std::endl;
    std::cout << std::endl;
    return;       
}
std::string ClapTrap::getName( void ) const
{
    return(this->_name);   
}
void ClapTrap::setName(std::string const name)
{
    this->_name = name;
    return;
}
int ClapTrap::getHp( void )
{
    return(this->_hitPoint);   
}
void ClapTrap::setHp(int const hitPoint)
{
    this->_hitPoint = hitPoint;
    return;
}
int ClapTrap::getEp( void )
{
    return(this->_energyPoint);
}

void ClapTrap::setEp(int const energyPoint)
{
    this->_energyPoint = energyPoint;
    return;
}
int ClapTrap::getAd( void )
{
    return(this->_attackDamage);
}

void ClapTrap::setAd(int const attackDamage)
{
        this->_attackDamage = attackDamage;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    this->_name = rhs.getName();
    this->_hitPoint = rhs._hitPoint;
    this->_attackDamage = rhs._attackDamage;
    this->_energyPoint = rhs._energyPoint;
    return(*this);
}