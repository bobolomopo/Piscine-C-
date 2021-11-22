/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:09 by jandre            #+#    #+#             */
/*   Updated: 2021/11/22 16:58:06 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructors & Destructors
DiamondTrap::DiamondTrap(void)
{
    this->name = "G PAS DNOM";
    this->hitpoints = FragTrap::hitpoints;
    this->energy = 50;
    this->attackdmg = 20;
    this->guardkeeper_mode = false;
    std::cout << "[DIAMONDTRAP]Mister " << name << " created" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy = 50;
    this->attackdmg = 20;
    this->guardkeeper_mode = false;
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