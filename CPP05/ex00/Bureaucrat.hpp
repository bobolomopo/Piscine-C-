/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:38:23 by jandre            #+#    #+#             */
/*   Updated: 2021/12/20 09:51:34 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    public:
        //Destructor & Constructor
        Bureaucrat();
		Bureaucrat( Bureaucrat const & src);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

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
		int			getGrade() const;

        //operator
        Bureaucrat & operator=(Bureaucrat const & src);

        //Actions
        void        incGrade(void);
        void        decGrade(void);

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif