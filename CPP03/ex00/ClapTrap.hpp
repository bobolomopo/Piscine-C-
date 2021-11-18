/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:26:48 by jandre            #+#    #+#             */
/*   Updated: 2021/11/18 16:46:58 by jandre           ###   ########.fr       */
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
        //Constructors & Destructors
        ClapTrap(void);
        ClapTrap(const ClapTrap &src);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        
        //opperators
        ClapTrap   &operator=(const ClapTrap &rhs);

        //accessors
        int get_attackdmg(void);
        std::string get_name(void);
        int get_hitpoints(void);
        int get_energy(void);
        
        //actions
        void change_attack_dmg(int new_value);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &in);

#endif