/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:14:31 by jandre            #+#    #+#             */
/*   Updated: 2022/01/28 12:42:37 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define SIZE 10

int main()
{
    Span def;
    Span span(SIZE);
    Span span_huge(100000);
    Span span_cpy(span);

    span.printArray();
    span_huge.printArray();
    span_cpy.printArray();
    srand(time(NULL));
    try
    {
        for (int i = 0; i < SIZE; i++)
            span.addNumber(rand() % 100);
    }
    catch (std::exception &e)
    {
        std::cout << "added too much numbers" << std::endl;
    }
    try
    {
        for (int i = 0; i < SIZE; i++)
            span.addNumber(i);
    }
    catch (std::exception &e)
    {
        std::cout << "added too much numbers" << std::endl;
    }
    try
    {
        for (int i = 0; i < 100000; i++)
            span_huge.addNumber(rand() % 1000);
    }
    catch (std::exception &e)
    {
        std::cout << "added too much numbers" << std::endl;
    }

    span.printArray();
    span_cpy = span;
    span_cpy.printArray();
    std::cout << "longest span : " << span.longestSpan() << std::endl;
    std::cout << "shortest span : " << span.shortestSpan() << std::endl;
   // span_huge.printArray();
    std::cout << "longest span : " << span_huge.longestSpan() << std::endl;
    std::cout << "shortest span : " << span_huge.shortestSpan() << std::endl;
    span.clearArray();
    span.printArray();
    try
    {
        span.addRange(0, 10000);
    }
    catch (std::exception &e)
    {
        std::cout << "added too much numbers" << std::endl;
    }
    Span span2(10);
    try
    {
        span2.addRange(4, 9);
    }
    catch (std::exception &e)
    {
        std::cout << "added too much numbers" << std::endl;
    }
    span2.printArray();
    span.printArray();
    return (0);
}