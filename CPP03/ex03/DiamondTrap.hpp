/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:39:01 by jandre            #+#    #+#             */
/*   Updated: 2021/11/22 16:56:08 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP
# define DIAMONDTRAP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
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

};

std::ostream &operator<<(std::ostream &out, const DiamondTrap &in);

#endif