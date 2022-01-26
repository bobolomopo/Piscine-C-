/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:02:31 by jandre            #+#    #+#             */
/*   Updated: 2022/01/26 18:56:59 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>
# include <exception>

class outOfRange : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Index out of range");
        }
};

template <typename T>
class Array 
{
    public:
        //Constructors & Destructors
        Array<T>() : _n(0), _array()
        {
            std::cout << "Array created with size 0" << std::endl;
            return ;
        }
        Array<T>(unsigned int n) : _n(n), _array(new T[n]())
        {
            std::cout << "Array created with size : " << this->_n << std::endl;
            return ;
        }
        Array<T>(Array<T> const &src)
        {
            *this = src;
            std::cout << "Copy constructor called" << std::endl;
            return ;
        }
        ~Array<T>()
        {
            std::cout << "Destructor called" << std::endl;
            if (this->_array)
                delete [] this->_array;
            return ;
        }

        //operators overloads
        T & operator[](unsigned int n) const
        {
            if (n >= this->size())
                throw (outOfRange());
            return (this->_array[n]);
        }
        
        Array<T> & operator=(Array<T> const &rhs)
        {
            if (this != &rhs)
            {
                this->_n = rhs._n;
                this->_array = new T[rhs.size()]();
                for (unsigned int i = 0; i < rhs._n; i++)
                    this->_array[i] = rhs[i];
            }
            return (*this);
        }

        //Actions accessors
        unsigned int size() const
        {
            return (this->_n);
        }


    private:
        unsigned int    _n;
        T               *_array;
        
};

#endif