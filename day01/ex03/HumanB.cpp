/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:12:07 by jandre            #+#    #+#             */
/*   Updated: 2021/08/12 21:35:08 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon("Nothing")
{
    this->name = name;
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
    return ;
}
