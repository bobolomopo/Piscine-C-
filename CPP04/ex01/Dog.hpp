/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:48:52 by jandre            #+#    #+#             */
/*   Updated: 2021/11/26 11:21:51 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG
# include "Animal.hpp"

class Dog : public Animal {
    public:
        //Constructors & Destructors
        Dog(void);
        Dog(const Dog &src);
        ~Dog(void);
        
        //opperators
        Dog   &operator=(const Dog &rhs);

        //actions
        void makeSound(void) const;
};

#endif