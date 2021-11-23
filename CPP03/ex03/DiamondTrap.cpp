/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:09 by jandre            #+#    #+#             */
/*   Updated: 2021/11/23 11:35:00 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors & Destructors
DiamondTrap::DiamondTrap(void)
{
    this->name = "G PAS DNOM";
    ScavTrap::attack(&target);
    this->FragTrap::hitpoints = FragTrap::hitpoints;
    this->ScavTrap::energy = ScavTrap::energy;
    this->FragTrap::attackdmg = FragTrap::attackdmg;
    this->ScavTrap::guardkeeper_mode = ScavTrap::guardkeeper_mode;
    std::cout << "[DIAMONDTRAP]Mister " << name << " created" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->FragTrap::hitpoints = FragTrap::hitpoints;
    this->ScavTrap::energy = ScavTrap::energy;
    this->FragTrap::attackdmg = FragTrap::attackdmg;
    this->ScavTrap::guardkeeper_mode = ScavTrap::guardkeeper_mode;
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