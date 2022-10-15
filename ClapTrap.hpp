
// ************************************************************************** //
//                                                                            //
//                      ClapTrap.cpp for D03                                  //
//                      Created: 2022/10/15 22:42:30                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>

class ClapTrap {

protected:

	std::string		_name;
	unsigned int	_hitpoint;
	unsigned int	_energypoint;
	unsigned int	_attackdamage;

public:

	ClapTrap();
	ClapTrap( std::string name );
	ClapTrap(ClapTrap &rhs);
	ClapTrap & operator=(ClapTrap &rhs);
	~ClapTrap();

	std::string	getName() const;

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

};

#endif

// ****************************************************************** //ClapTrap