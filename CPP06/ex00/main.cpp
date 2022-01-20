/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:56:48 by jandre            #+#    #+#             */
/*   Updated: 2022/01/20 13:38:29 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "type one argument please" << std::endl;
        return (0);
    }
    Convert c((std::string)argv[1]);
    c.tochar();
    c.toint();
    c.tofloat();
    return (0);
}