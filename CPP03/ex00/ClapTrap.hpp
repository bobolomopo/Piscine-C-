/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:48 by jandre            #+#    #+#             */
/*   Updated: 2021/10/19 10:18:06 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
# define CLAPTRAP
# include <string>
# include <iostream>

class ClapTrap {
    private:
		std::string name;
        int         hitpoints;
        int         energy;
        int         attackdmg;
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap(void);
        
        int get_attackdmg();
        void change_attack_dmg(int new_value);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif