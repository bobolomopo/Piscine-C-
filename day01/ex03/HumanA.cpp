/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:12:14 by jandre            #+#    #+#             */
/*   Updated: 2021/08/12 21:30:30 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon("Unarmed") = weapon;
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
    return ;
}
