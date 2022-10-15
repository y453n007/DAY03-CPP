
// ************************************************************************** //
//                                                                            //
//                      ClapTrap.cpp for D03                                  //
//                      Created: 2022/10/13 17:11:34                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap : Default constractor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
    std::cout << "ClapTrap : Constractor with param called." << std::endl;

    this->_name = name;
    this->_hitpoint = 10;
    this->_energypoint = 10;
    this->_attackdamage = 0;

}

ClapTrap::ClapTrap( ClapTrap &rhs )
{ 
    std::cout << "ClapTrap : Copy constractor called." << std::endl;
    *this = rhs; 
}

ClapTrap & ClapTrap::operator=( ClapTrap & rhs ) 
{
    std::cout << "ClapTrap : Copy assignment operator called." << std::endl;
    this->_name = rhs._name;
    this->_hitpoint = rhs._hitpoint;
    this->_energypoint = rhs._energypoint;
    this->_attackdamage = rhs._attackdamage;

    return *this;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap : Destractor called." << std::endl;
}

std::string	ClapTrap::getName() const
{
    return _name;
}

void	ClapTrap::attack( const std::string& target )
{
    std::cout << "ClapTrap : ATTACK " <<std::endl;
     if ( !_energypoint )
    {
        std::cout << _name << " can't hit." <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target;
    _energypoint--;
}

void	ClapTrap::takeDamage( unsigned int amount )
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

void	ClapTrap::beRepaired( unsigned int amount )
{
    if ( !_energypoint )
    {
        std::cout << _name <<" can't heal." <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " repairing." << std::endl;
    _hitpoint += amount;
    _energypoint--;
}

// ************************************************************************** //