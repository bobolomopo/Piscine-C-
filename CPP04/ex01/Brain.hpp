/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:06:49 by jandre            #+#    #+#             */
/*   Updated: 2021/11/26 16:45:38 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN
# include <iostream>
# include <cstdlib>

class Brain {
    private:
        std::string idea[100];

    public:
        //Constructors & Destructors
        Brain(void);
        Brain(const Brain &src);
        ~Brain();
        
        //opperators
        Brain   &operator=(const Brain &rhs);

        //accessor
        
        //actions
};

#endif