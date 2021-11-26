/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:28 by jandre            #+#    #+#             */
/*   Updated: 2021/11/26 11:21:23 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//Constructor Destructor

Cat::Cat(void)
{
    this->type = "Cat";
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
    std::cout << "Cat destructed" << std::endl;
    return ;
}

//operator

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
        this->set_type(rhs.get_type());
    return (*this);
}

//Actions

void Cat::makeSound(void) const
{
    std::cout << "Miaouw Miaouw Miaouw" << std::endl;
    return ;
}