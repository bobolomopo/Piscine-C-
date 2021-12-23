/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:50:58 by jandre            #+#    #+#             */
/*   Updated: 2021/12/23 16:03:13 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
    public:
        //Destructor & Constructor
        Intern();
		Intern(Intern const &src);
		~Intern();

        //operator
        Intern &operator=(const Intern &b);

        //Actions
        AForm *makeForm(std::string type, std::string target);
};

#endif