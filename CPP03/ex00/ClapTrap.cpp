/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:44 by jandre            #+#    #+#             */
/*   Updated: 2021/11/18 16:45:50 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors & Destructors
ClapTrap::ClapTrap(void) : name("G PAS DNOM"), hitpoints(10), energy(10), attackdmg(0)
{
    std::cout << "Mister " << name << " created" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energy(10), attackdmg(0)
{
    std::cout << "Mister " << name << " created" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called for " << this->name << std::endl;
    return ;
}

//accessors

std::string ClapTrap::get_name(void)
{
    return (this->name);
}

int ClapTrap::get_attackdmg(void)
{
    return(this->attackdmg);
}

int ClapTrap::get_energy(void)
{
    return(this->energy);
}

int ClapTrap::get_hitpoints(void)
{
    return (this->hitpoints);
}

//operators
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.get_name();
        this->attackdmg = rhs.get_attackdmg();
        this->energy = rhs.get_energy();
        this->hitpoints = rhs.get_hitpoints();
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &in)
{
    out << in.get_name();
    return (out);
}

void ClapTrap::change_attack_dmg(int new_value)
{
    this->attackdmg = new_value;
    std::cout << "Attack damage of " << this->name << " succesfully changed to " << new_value << std::endl;
}

int ClapTrap::get_attackdmg(void)
{
    return (this->attackdmg);
}

void ClapTrap::attack(std::string const &target)
{
    if (this->energy > 0)
    {
        this->energy--;
        std::cout << this->name << " attacks " << target << " causing " << this->attackdmg << " damages" << std::endl;
    }
    else
        std::cout << this->name << " doesn't have enough energy to attack" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitpoints <= 0)
    {
        std::cout << this->name << " is already dead" << std::endl;
        return ;
    }
    std::cout << this->name << " received " << amount << " damages";
    this->hitpoints -= amount;
    if (this->hitpoints <= 0)
    {
        this->hitpoints = 0;
        std::cout << std::endl << this->name << " received too much damages and died!" << std::endl;
    }
    else
        std::cout << std::endl << this->name << " has " << this->hitpoints << " left" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitpoints <= 0)
    {
        this->hitpoints += amount;
        std::cout << this->name << " was ressucitated and is now left with " << amount << " hitpoints!! MIRACLE" << std::endl;
        return ;
    }
    std::cout << this->name << " is healed of" << amount << " hitpoint";
    this->hitpoints += amount;
    std::cout << std::endl << this->name << " now has " << this->hitpoints << " left" << std::endl;
    return ;
}