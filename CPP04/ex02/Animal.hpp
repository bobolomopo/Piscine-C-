/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:44:29 by jandre            #+#    #+#             */
/*   Updated: 2021/12/06 16:59:45 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
# define ANIMAL
# include <iostream>

class Animal {
    protected:
        std::string type;

    public:
        //Constructors & Destructors
        Animal(void);
        Animal(const Animal &src);
        virtual ~Animal();
        
        //opperators
        Animal   &operator=(const Animal &rhs);

        //accessors
        std::string get_type(void) const;
        void set_type(std::string const new_type);
        
        //actions
        virtual void makeSound(void) const = 0;
};

#endif