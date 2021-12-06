/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:04 by jandre            #+#    #+#             */
/*   Updated: 2021/12/06 16:34:11 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->brain = new Brain;
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "Dog copied" << std::endl;
    return ;
}

Dog::~Dog(void)
{
    delete(this->brain);
    std::cout << "Dog destructed" << std::endl;
    return ;
}

//operator

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        *(this->brain) = *(rhs.brain);
        this->set_type(rhs.get_type());
    }
    return (*this);
}

//Accessor

std::string Dog::get_idea(int i) const
{
    return (this->brain->get_idea(i));
}

//Actions

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf Wouf" << std::endl;
    return ;
}