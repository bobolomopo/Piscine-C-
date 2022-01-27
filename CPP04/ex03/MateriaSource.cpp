/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:26:29 by jandre            #+#    #+#             */
/*   Updated: 2022/01/27 17:12:29 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//Constructor & Destructor
MateriaSource::MateriaSource(void)
{
    for (int i(0); i < 4; i++)
		this->materia[i] = 0;
    std::cout << "MateriaSource created" << std::endl;
    return ;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
    return ;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructed" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (this->materia[i] != NULL)
        {
            std::cout << "Template learned at index : " << i << " was type : " << \
                this->materia[i]->getType() << std::endl;
            delete (this->materia[i]);
        }
    }
    return ;
}

//accessor

AMateria		*MateriaSource::getMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return (NULL);
	return (this->materia[idx]);
}


//operator
MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i(0); i < 4; i++)
		    this->materia[i] = rhs.getMateria(i);
    }
    return (*this);
}

//Actions
void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 3; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            std::cout << "Materia learned!" << std::endl;
            return ;
        }
    }
    return ;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 3; i++)
    {
        if (this->materia[i]->getType() == type)
        {
            std::cout << "Materia created!" << std::endl;
            return (this->materia[i]->clone());
        }
    }
    return (0);
}