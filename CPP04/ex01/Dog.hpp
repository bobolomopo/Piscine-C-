/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:48:52 by jandre            #+#    #+#             */
/*   Updated: 2021/12/06 15:41:42 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private: 
        Brain *brain;
    public:
        //Constructors & Destructors
        Dog(void);
        Dog(const Dog &src);
        ~Dog(void);
        
        //opperators
        Dog   &operator=(const Dog &rhs);

        //Accessors
        std::string get_idea(int i) const;

        //actions
        void makeSound(void) const;
};

#endif