/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:57 by jandre            #+#    #+#             */
/*   Updated: 2021/11/19 16:42:20 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Constructors & Destructors
FragTrap::FragTrap(void)
{
    this->name = "G PAS DNOM";
    this->hitpoints = 100;
    this->energy = 100;
    this->attackdmg = 30;
    std::cout << "[FRAGTRAP]Mister " << name << " created" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitpoints = 100;
    this->energy = 100;
    this->attackdmg = 30;
    std::cout << "[FRAGTRAP]Mister " << name << " created" << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
    *this = src;
    std::cout << "[FRAGTRAP]Mister " << name << " created" << std::endl;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "[FRAGTRAP]Destructor called for " << this->name << std::endl;
    return ;
}

//operator

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    if (this != &rhs)
    {
        this->set_name(rhs.get_name());
        this->set_attackdmg(rhs.get_attackdmg());
        this->set_energy(rhs.get_energy());
        this->set_hitpoints(rhs.get_hitpoints());
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const FragTrap &in)
{
    out << in.get_name();
    return (out);
}

//actions

void FragTrap::highFivesGuys(void)
{
    std::cout << this->name << " : Yes Lets do a HIGH FIVE mate!!" << std::endl;
    return ;
}