
// ************************************************************************** //
//                                                                            //
//                      FragTrap.cpp for D03                                  //
//                      Created: 2022/10/15 22:42:26                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

protected:

	std::string		_name;
	unsigned int	_hitpoint;
	unsigned int	_energypoint;
	unsigned int	_attackdamage;

public:

	FragTrap();
	FragTrap( std::string name );
	FragTrap(FragTrap &rhs);
	FragTrap & operator=(FragTrap &rhs);
	~FragTrap();

	std::string	getName() const;

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	highFivesGuys( void );
};

#endif

// ****************************************************************** //FragTrap