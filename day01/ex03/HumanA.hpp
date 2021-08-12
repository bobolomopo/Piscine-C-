/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:12:11 by jandre            #+#    #+#             */
/*   Updated: 2021/08/12 21:28:33 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A
# include "Weapon.hpp"

class HumanA
{
    public:
    HumanA(std::string name, Weapon weapon);
    ~HumanA(void);

    void    attack(void);
    void    setWeapon(Weapon weapon);

    private:
    Weapon      weapon(std::string type);
    std::string name;
};

#endif