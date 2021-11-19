/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:23:20 by jandre            #+#    #+#             */
/*   Updated: 2021/11/19 16:23:08 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
# define SCAVTRAP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:
        int guardkeeper_mode;
    public:
        //Constructors & Destructors
        ScavTrap(void);
        ScavTrap(const ScavTrap &src);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        
        //opperators
        ScavTrap   &operator=(const ScavTrap &rhs);

        //action
        void guardGate(void);
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &in);

#endif