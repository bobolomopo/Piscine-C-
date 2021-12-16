/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:50:30 by jandre            #+#    #+#             */
/*   Updated: 2021/12/16 17:16:14 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER
# include "AbstractClasses.hpp"

class Character : public ICharacter {
    private:
        AMateria    *materia[4];
        std::string name;
    
    public:
        //Constructors & Destructors
        Character(void);
        Character(std::string name);
        Character(Character const &copy);
        ~Character(void);

        //Accessors
        AMateria *getMateria(int index) const;
        std::string const &getName() const;
        
        //opperators
        Character &operator=(const Character &rhs);

        //Action
        void unequip(int idx);
        void equip(AMateria *m);
        void use(int idx, ICharacter& target);
};

#endif