/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:13:14 by jandre            #+#    #+#             */
/*   Updated: 2021/08/12 21:24:47 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON
# include <iostream>

class Weapon
{
    public:
    Weapon(std::string type);
    ~Weapon(void);

    void        setType(std::string type);
    std::string &getType(void);

    private:
    std::string type;
};

#endif