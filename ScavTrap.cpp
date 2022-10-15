
// ************************************************************************** //
//                                                                            //
//                      ScavTrap.cpp for D03                                  //
//                      Created: 2022/10/15 22:59:29                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default constractor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name )
{
    std::cout << "ScavTrap : Constractor with param called." << std::endl;

    this->_name = name;
    this->_hitpoint = 100;
    this->_energypoint = 50;
    this->_attackdamage = 20;
    this->_secur = 0;

}

ScavTrap::ScavTrap( ScavTrap &rhs )
{ 
    std::cout << "ScavTrap : Copy constractor called." << std::endl;
    *this = rhs; 
}

ScavTrap&   ScavTrap::operator=( ScavTrap & rhs ) 
{
    std::cout << "ScavTrap : Copy assignment operator called." << std::endl;
    this->_name = rhs._name;
    this->_hitpoint = rhs._hitpoint;
    this->_energypoint = rhs._energypoint;
    this->_attackdamage = rhs._attackdamage;

    return *this;
}

void	ScavTrap::attack( const std::string& target )
{
    std::cout << "ScavTrap : ATTACK " <<std::endl;
     if ( !_energypoint )
    {
        std::cout << _name << " can't hit." <<std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target;
    _energypoint--;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap : Destractor called." << std::endl;
}

std::string	ScavTrap::getName() const
{
    return _name;
}

void	ScavTrap::guardGate()
{
    if (!_secur)
    {
        std::cout << _name << " protected" << std::endl;
        _secur = 1;
    }
    else if (_secur)
    {
        std::cout << _name << " unprotected" << std::endl;
        _secur = 0;
    }

}