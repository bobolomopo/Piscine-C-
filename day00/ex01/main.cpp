/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:31:15 by jandre            #+#    #+#             */
/*   Updated: 2021/07/28 13:59:33 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lamephonebook.hpp"

int main()
{
    lame_phone_book lpb;
    std::string     command;

    while (1)
    {
        std::cout << "What do you want to do? ";
        getline(std::cin, command);
        if (command != "EXIT" && command != "ADD" && command != "SEARCH")
            std::cout << "Please do something that i know, \
i am pretty dumb! Oh and without spaces please!" << std::endl;
        if (command == "EXIT")
            break ;
    }
    return (0);
}