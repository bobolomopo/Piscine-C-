/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:07:12 by jandre            #+#    #+#             */
/*   Updated: 2021/12/16 17:30:21 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructor & Destructor
Character::Character(void)
{
	this->name = "NONAME";
    for (int i(0); i < 4; i++)
		this->materia[i] = 0;
    std::cout << "Character created, name : " << this->name << std::endl;
    return ;
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i(0); i < 4; i++)
		this->materia[i] = 0;
    std::cout << "Character created, name : " << this->name << std::endl;
    return ;
}

Character::Character(Character const &copy)
{
	*this = copy;
    return ;
}

Character::~Character()
{
    std::cout << "Character destructed, name : " << this->name << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (this->materia[i] != NULL)
            std::cout << "Materia equiped at index : " << i << " was type : " << this->materia[i]->getType() << std::endl;
    }
    return ;
}

//accessor
std::string const	&Character::getName() const
{
	return this->name;
}

AMateria		*Character::getMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return (NULL);
	return (this->materia[idx]);
}


//operator
Character& Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.getName();
        for (int i(0); i < 4; i++)
		    this->materia[i] = rhs.getMateria(i);
    }
    return (*this);
}

//Actions

void Character::unequip(int idx)
{
    if (this->materia[idx] != NULL)
        std::cout << "Materia successfuly unequiped" << std::endl;
    this->materia[idx] = NULL;
    return ;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 3; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            std::cout << "Materia equiped" << std::endl;
            return ;
        }
    }
    return ;
}

void Character::use(int idx, ICharacter &target)
{
    if (this->materia[idx] == NULL)
    {
        std::cout << "No Materia equipped there" << std::endl;
        return ;
    }
    std::cout << this->name;
    this->materia[idx]->use(target);
    return ;
}