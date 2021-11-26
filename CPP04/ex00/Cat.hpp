/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:49:17 by jandre            #+#    #+#             */
/*   Updated: 2021/11/26 11:21:29 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT
# include "Animal.hpp"

class Cat : public Animal {
    public:
        //Constructors & Destructors
        Cat(void);
        Cat(const Cat &src);
        ~Cat(void);
        
        //opperators
        Cat   &operator=(const Cat &rhs);

        //Action
        void makeSound(void) const;
};

#endif