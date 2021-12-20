/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:05:02 by jandre            #+#    #+#             */
/*   Updated: 2021/12/20 16:14:35 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP
# include "Form.hpp"

class Bureaucrat;
class Form;

class SchrubberyForm : Form {
    public:
    //Constructor & Destructors
        SchrubberyForm();
		SchrubberyForm(SchrubberyForm const &src);
		SchrubberyForm(std::string name);
		~SchrubberyForm();
    
    //Actions

};

#endif