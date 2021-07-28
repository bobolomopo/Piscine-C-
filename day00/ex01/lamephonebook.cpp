/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lamephonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:31:22 by jandre            #+#    #+#             */
/*   Updated: 2021/07/28 13:54:12 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lamephonebook.hpp"

lame_phone_book::lame_phone_book(void)
{
    std::cout << "*** WELCOME TO THE LAMEST PHONE BOOK EVER!!! ***" << std::endl;
    std::cout << std::endl;
    std::cout << "You have multiple command at your disposal :" << std::endl;
    std::cout << "ADD : to add more friends to your favorite phone book" << std:: endl;
    std::cout << "SEARCH : to know what friends you already have" << std::endl;
    std::cout << "EXIT : to leave your sad phone book :(" << std::endl;
    std::cout << "Important reminder : you cant have more than 8 friends" << std::endl;
    std::cout << std::endl;
    return ;
}

lame_phone_book::~lame_phone_book(void)
{
    std::cout << "Oh already leaving? you will loose all your registered friends..." << std::endl;
    return ;
}
