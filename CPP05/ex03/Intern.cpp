/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:57:03 by jandre            #+#    #+#             */
/*   Updated: 2021/12/23 16:22:01 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Constructor & Destructor
Intern::Intern()
{
    return ;
}

Intern::Intern(Intern const &src)
{
    *this = src;
    return ;
}

Intern::~Intern()
{
    return ;
}

//operator overload
Intern &Intern::operator=(Intern const & src)
{
    (void)src;
	return (*this);
}

//Action
AForm *Intern::makeForm(std::string type, std::string target)
{
    if (type == "robotomy")
    {
        std::cout << "Intern creates a new robotomy request with the target : " << target << std::endl;
        return (new RobotomyForm(target));
    }
    else if (type == "presidential")
    {
        std::cout << "Intern creates a new presidential request with the target : " << target << std::endl;
        return (new PresidentialForm(target));
    }
    else if (type == "shrubbery")
    {
        std::cout << "Intern creates a new shrubbery request with the target : " << target << std::endl;
        return (new ShrubberyForm(target));
    }
    else
        std::cout << "Intern doesn't know any form like that." << std::endl;
    return (NULL);
}