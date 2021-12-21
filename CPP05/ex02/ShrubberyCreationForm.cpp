/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:07:13 by jandre            #+#    #+#             */
/*   Updated: 2021/12/21 19:25:05 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Constructors & Destructors
SchrubberyForm::SchrubberyForm(std::string target) : AForm("SchrubberyForm", 145, 137), _target(target)
{
    return ;
}

SchrubberyForm::SchrubberyForm(SchrubberyForm const &src) : AForm(src.getName(), 145, 137), _target(src.getTarget())
{
    return ;
}

SchrubberyForm::SchrubberyForm(std::string target, std::string name) : AForm(name, 145, 137), _target(target)
{
    return ;
}

SchrubberyForm::~SchrubberyForm()
{
    return ;
}

//Accessors
std::string SchrubberyForm::getTarget() const
{
    return (this->_target);
}

//operator overload
SchrubberyForm &SchrubberyForm::operator=(SchrubberyForm const &src)
{
	if (this == &src)
		return (*this);
    AForm::operator=(src);
	return (*this);
}

std::ostream &operator<<(std::ostream &o, SchrubberyForm const &i)
{
    std::string sign;

    if (i.getIfSigned() == true)
        sign = "signed";
    else
        sign = "not signed";
	o << i.getName() << " [ " << sign << " | Schrubbery form | " << i.getGradeSign() << " | " << i.getGradeExe() << " ]";
	return (o);
}

void SchrubberyForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (this->getIfSigned() == false)
            throw(SchrubberyForm::FormNotSigned());
        else if (this->getGradeExe() < executor.getGrade())
            throw(SchrubberyForm::GradeTooLowException());
    }
    catch (AForm::GradeTooLowException &e)
	{
		std::cout << executor.getName() << e.what() << std::endl;
        return ;
	}
	catch (AForm::FormNotSigned &e)
	{
		std::cout << this->getName() << e.what() << std::endl;
        return ;
	}
    std::string filename = _target + "_shrubbery";
    std::ofstream outfile(filename.c_str(), std::ios::app);
    outfile << "\
           ___\n\
           IOI\n\
          IOOOI\n\
        IO0O0O0OI\n\
        IO0O0O0O0I\n\
         I0O0O0OI\n\
          I0O0I\n\
           |1|\n\
           |1|\n\
           |1|\n\
           |||\n\
        &&__|__&&\n" << std::endl;
    outfile.close();
    return ;
}