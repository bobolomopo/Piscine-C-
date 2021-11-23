/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:01 by jandre            #+#    #+#             */
/*   Updated: 2021/11/23 12:43:08 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
# define DIAMONDTRAP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
    private:
        std::string name;
    
    public:
        //Constructors & Destructors
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &src);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        
        //opperators
        DiamondTrap   &operator=(const DiamondTrap &rhs);

        //accessors
        void set_name(std::string const name);
        std::string get_name(void) const;

        //actions
        using	ScavTrap::attack;
        void    whoAmI(void);
};

std::ostream &operator<<(std::ostream &out, const DiamondTrap &in);

#endif