/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:05:02 by jandre            #+#    #+#             */
/*   Updated: 2021/12/21 18:43:33 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class SchrubberyForm : public AForm {
    private:
        std::string const _target;
    public:
    //Constructor & Destructors
        SchrubberyForm(std::string target);
		SchrubberyForm(SchrubberyForm const &src);
		SchrubberyForm(std::string target, std::string name);
		~SchrubberyForm();

    //operator
        SchrubberyForm &operator=(SchrubberyForm const & src);
    
    //Accessors
        std::string getTarget() const;
        
    //Actions
        void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &o, SchrubberyForm const &i);

#endif