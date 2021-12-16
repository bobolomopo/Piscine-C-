/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:20:22 by jandre            #+#    #+#             */
/*   Updated: 2021/12/16 17:16:32 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE
# define MATERIASOURCE
# include "AbstractClasses.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria    *materia[4];

    public:
        //Constructors & Destructors
        MateriaSource(void);
        MateriaSource(MateriaSource const &copy);
        ~MateriaSource(void);

        //opperators
        MateriaSource &operator=(const MateriaSource &rhs);

        //Accessors
        AMateria *getMateria(int index) const;

        //Actions
        void learnMateria(AMateria* m);
	    AMateria* createMateria(std::string const &type);
};

#endif