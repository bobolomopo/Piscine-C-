/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:06:29 by jandre            #+#    #+#             */
/*   Updated: 2021/11/26 16:45:46 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string ideas[8] = { "EAT", "PLAY", "CUDDLE", "DRINK", "WTF", "FIGHT", "GRRR", "SHHH"};

//Constructor destructor

Brain::Brain(void)
{
    int i;

    i = -1;
    while (++i < 100)
        this->idea[i] = ideas[rand()%8];
    std::cout << "Brain created" << std::endl;
    return ;
}

Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "Brain copied" << std::endl;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructed" << std::endl;
    return ;
}

//operator

Brain &Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
        this->set_type(rhs.get_type());
    return (*this);
}

//Actions
