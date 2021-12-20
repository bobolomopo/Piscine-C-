/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 10:18:45 by jandre            #+#    #+#             */
/*   Updated: 2021/12/20 15:27:26 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const   _name;
        int const           _required_sign;
        int const           _required_exe;
        bool                _is_signed;
    public:
        //Destructor & Constructor
        Form();
		Form(Form const &src);
		Form(std::string name, int grade_to_sign, int grade_to_exe);
		~Form();

        //Exception class
        class GradeTooHighException : std::exception
		{
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : std::exception
		{
			public:
				const char * what() const throw();
		};

        //Accessors
        std::string getName() const;
		int			getGradeSign() const;
		int			getGradeExe() const;
        bool        getIfSigned() const;

        //operator
        Form & operator=(Form const & src);

        //Action
        void beSigned(Bureaucrat bureau);

};

std::ostream &			operator<<(std::ostream &o, Form const &i);

#endif