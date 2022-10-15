
// ************************************************************************** //
//                                                                            //
//                      FragTrap.cpp for D03                                  //
//                      Created: 2022/10/15 23:01:15                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap : Default constractor called." << std::endl;
}

FragTrap::FragTrap( std::string name )
{
    std::cout << "FragTrap : Constractor with param called." << std::endl;

    this->_name = name;
    this->_hitpoint = 100;
    this->_energypoint = 100;
    this->_attackdamage = 30;

}

FragTrap::FragTrap( FragTrap &rhs )
{ 
    std::cout << "FragTrap : Copy constractor called." << std::endl;
    *this = rhs; 
}

FragTrap & FragTrap::operator=( FragTrap & rhs ) 
{
    std::cout << "FragTrap : Copy assignment operator called." << std::endl;
    this->_name = rhs._name;
    this->_hitpoint = rhs._hitpoint;
    this->_energypoint = rhs._energypoint;
    this->_attackdamage = rhs._attackdamage;

    return *this;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap : Destractor called." << std::endl;
}

std::string	FragTrap::getName() const
{
    return _name;
}

void	FragTrap::attack( const std::string& target )
{
    std::cout << "FragTrap : ATTACK " <<std::endl;
     if ( !_energypoint )
    {
        std::cout << _name << " can't hit." <<std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target;
    _energypoint--;
}

void	FragTrap::takeDamage( unsigned int amount )
{
    if ( _hitpoint - amount == 0)
    {
        std::cout << ", causing death." << std::endl;
        return ;
    }
    _attackdamage = amount;
    std::cout << ", causing " << _attackdamage << " points of damage." 
    << std::endl;
    _hitpoint-= amount;
}

void    FragTrap::highFivesGuys()
{
    std::cout << _name << " :: says Hello," << std::endl;
}

// ************************************************************************** //