
// ************************************************************************** //
//                                                                            //
//                      main.cpp for D03                                      //
//                      Created: 2022/10/15 23:34:48                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ScavTrap    A("alison");
    ScavTrap    B("amanda");
    ClapTrap    C("izza");
    FragTrap    D("mouha");

    A.attack( B.getName() );
    B.takeDamage(15);
    D.highFivesGuys();
    C.attack( A.getName() );
    A.takeDamage(15);
    A.attack( B.getName() );
    B.takeDamage(26);
    A.attack( B.getName() );
    B.takeDamage(40);
    A.attack( B.getName() );
    B.takeDamage(50);
    A.attack( B.getName() );
    B.takeDamage(2);
    A.attack( B.getName() );
    B.takeDamage(5);
    B.guardGate();

    return 0;
}
// ************************************************************************** //
