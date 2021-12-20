/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:05:19 by jandre            #+#    #+#             */
/*   Updated: 2021/12/20 16:15:02 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP
# include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyForm : Form {
    public:
    //Constructor & Destructors
        RobotomyForm();
		RobotomyForm(RobotomyForm const &src);
		RobotomyForm(std::string name);
		~RobotomyForm();
    
    //Actions

};

#endif