/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:02:31 by jandre            #+#    #+#             */
/*   Updated: 2022/01/26 15:22:06 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

class outOfRange : std::exception
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
            return ;
        }
        Array<T>(unsigned int n) : _n(n), _array(new T[_n]())
        {
            return ;
        }
        Array<T>(Array<T> const &src)
        {
            *this = src;
            return ;
        }
        ~Array<T>()
        {
            if (this->_array)
                delete [] this->_array;
            return ;
        }

        //operators overloads
        T &operator[](unsigned int n) const
        {
            if (n > this->size())
                throw (outOfRange());
            return (this->_array[n]);
        }
        Array<T> &operator=(Array<T> const &rhs)
        {
            if (this != &rhs)
            {
                if (this->_array)
                    delete [] this->_array;
                this->_n = rhs._n;
                T *array = new T[_n]();
                for (unsigned int i = 0; i < rhs._n; i++)
                    array[i] = rhs[i];
                this->_array = array;
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