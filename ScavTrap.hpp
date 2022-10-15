
// ************************************************************************** //
//                                                                            //
//                      ScavTrap.cpp for D03                                  //
//                      Created: 2022/10/15 22:42:24                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:

	int	_secur;

public:

	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ScavTrap & rhs );
	~ScavTrap();
	ScavTrap&	operator=( ScavTrap& rhs );
	void	attack( const std::string& target );

	std::string	getName() const;
	void		guardGate();
	
};

#endif

// ****************************************************************** //ScavTrap