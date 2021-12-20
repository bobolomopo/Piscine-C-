/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:05:59 by jandre            #+#    #+#             */
/*   Updated: 2021/12/20 16:14:31 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP
# include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialForm : Form {
    public:
    //Constructor & Destructors
        PresidentialForm();
		PresidentialForm(PresidentialForm const &src);
		PresidentialForm(std::string name);
		~PresidentialForm();
    
    //Actions
        
};

#endif