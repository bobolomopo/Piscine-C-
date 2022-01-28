/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:07:12 by jandre            #+#    #+#             */
/*   Updated: 2022/01/28 17:22:49 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructor & Destructor
Character::Character(void)
{
	this->name = "NONAME";
    for (int i(0); i < 4; i++)
		this->materia[i] = NULL;
    std::cout << "Character created, name : " << this->name << std::endl;
    return ;
}

Character::Character(std::string name)
{
    this->name = name;
    for (int i(0); i < 4; i++)
		this->materia[i] = NULL;
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
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {
            std::cout << "Materia equiped at index : " << i << " was type : " << \
                this->materia[i]->getType() << std::endl;
            delete (this->materia[i]);
        }
    }
    return ;
}

//accessor
std::string const	&Character::getName() const
{
	return (this->name);
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
        this->name = rhs.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i] != NULL)
                delete (this->materia[i]);
            if (rhs.getMateria(i) != NULL)
		        this->materia[i] = rhs.getMateria(i)->clone();
            else
                this->materia[i] = NULL;
        }
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