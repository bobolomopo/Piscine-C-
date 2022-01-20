/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:49:54 by jandre            #+#    #+#             */
/*   Updated: 2022/01/20 13:46:45 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//Constructor & Destructor

Convert::Convert(std::string input) : input(input)
{
    return ;
} 

Convert::Convert(Convert const &src)
{
    *this = src;
    return ;
}

Convert::~Convert()
{
    return ;
}

//operator overload
Convert &Convert::operator=(Convert const & src)
{
    this->input = src.get_input();
	return (*this);
}

//accessors
std::string Convert::get_input() const
{
    return (this->input);
}

//exception
const char *Convert::Impossible::what() const throw()
{
    return ("Impossible");
}

const char *Convert::NotDisplayable::what() const throw()
{
    return ("Not Displayable");
}

void Convert::tochar(void) const
{
    int i;
    char c;

    std::cout << "char: ";
    try
    {
        i = atoi(this->input.c_str());
        if (*input.begin() < '0' || *input.begin() > '9' || i < 0 || i > 255)
            throw(Convert::Impossible());
        if (i < 32 || i > 127)
            throw(Convert::NotDisplayable());
    }
    catch (Convert::Impossible &e)
    {
        if (this->input.length() == 1)
        {
            std::cout << this->input << std::endl;
            return ;
        }
        std::cout << e.what() << std::endl;
        return ;
    }
    catch (Convert::NotDisplayable &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }
    c = char(i);
    std::cout << "'" << c << "'" << std::endl;
    return ;
}

void Convert::toint(void) const
{
    long i;

    std::cout << "int : ";
    i = atol(this->input.c_str());
    try
    {
        if (i > 2147483647 || i < -2147483648)
            throw(Convert::Impossible());
    }
    catch(const Convert::Impossible &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }
    std::cout << i << std::endl;
    return ;
}

void Convert::tofloat(void) const
{
    double i;
    char **end = NULL;

    std::cout << "float : ";
    if (this->input == "0")
    {
        std::cout << "0.0f" << std::endl;
        return ;
    }
    i = strtod(this->input.c_str(), end);
    try
    {
        if (i == 0.0F)
            throw(Convert::Impossible());
    }
    catch(const Convert::Impossible &e)
    {
        std::cout << e.what() << std::endl;
        return ;
    }
    std::cout << std::setprecision (15) << strtod(this->input.c_str(), end) << "f" << std::endl;
    return ;
}

