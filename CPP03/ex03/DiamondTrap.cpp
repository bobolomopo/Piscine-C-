/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:09 by jandre            #+#    #+#             */
/*   Updated: 2021/11/23 12:54:14 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors & Destructors
DiamondTrap::DiamondTrap(void) : ClapTrap("G PAS DNOM_clap_name")
{
    this->hitpoints = FragTrap::hitpoints;
    this->energy = ScavTrap::energy;
    this->attackdmg = FragTrap::attackdmg;
    std::cout << "[DIAMONDTRAP]Mister " << name << " created" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->hitpoints = FragTrap::hitpoints;
    this->energy = ScavTrap::energy;
    this->attackdmg = FragTrap::attackdmg;
    std::cout << "[DIAMONDTRAP]Mister " << name << " created" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
    *this = src;
    std::cout << "[DIAMONDTRAP]Mister " << name << " created" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "[DIAMONDTRAP]Destructor called for " << this->name << std::endl;
    return ;
}

//Accessors

void DiamondTrap::set_name(std::string const name)
{
    this->name = name;
    return ;
}

std::string DiamondTrap::get_name(void) const
{
    return (this->name);
}

//actions

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DIAMONDTRAP name : " << this->name << std::endl;
    std::cout << "CLAPTRAP name for DIAMONDTRAP class : " << ClapTrap::get_name() << std::endl; 
}

//Operator

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    if (this != &rhs)
    {
        this->set_name(rhs.get_name());
        this->FragTrap::set_attackdmg(rhs.FragTrap::get_attackdmg());
        this->ScavTrap::set_energy(rhs.ScavTrap::get_energy());
        this->FragTrap::set_hitpoints(rhs.FragTrap::get_hitpoints());
        this->set_guardGate(rhs.get_guardGate());
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const DiamondTrap &in)
{
    out << in.get_name();
    return (out);
}