/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:28 by jandre            #+#    #+#             */
/*   Updated: 2021/12/06 16:36:38 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Constructor Destructor

Cat::Cat(void)
{
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "Cat copied" << std::endl;
    return ;
}

Cat::~Cat(void)
{
    delete(this->brain);
    std::cout << "Cat destructed" << std::endl;
    return ;
}

//operator

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        *(this->brain) = *(rhs.brain);
        this->set_type(rhs.get_type());
    }
    return (*this);
}

//Accessor

std::string Cat::get_idea(int i) const
{
    return (this->brain->get_idea(i));
}

//Actions

void Cat::makeSound(void) const
{
    std::cout << "Miaouw Miaouw Miaouw" << std::endl;
    return ;
}