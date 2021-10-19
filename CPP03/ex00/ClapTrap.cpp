/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:44 by jandre            #+#    #+#             */
/*   Updated: 2021/10/19 10:21:34 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    this->hitpoints = 10;
    this->energy = 10;
    this->attackdmg = 0;
    std::cout << "Mister " << name << " created" << std::endl;
    return ;
}


ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called for " << this->name << std::endl;
    return ;
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
    std::cout << this->name << " attacks " << target << " causing " << this->attackdmg << " damages" << std::endl;
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