#include "Span.hpp"

int main()
{
	{
		std::cout << "Basic test :" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span sp(6);

		sp.addNumber(-3);
		sp.addNumber(29);
		sp.addNumber(3);
		sp.addNumber(26);
		sp.addNumber(-7);
		sp.addNumber(10);

		std::cout << "Test for sp = ( ";
		sp.printNumbers();
		std::cout << ")" << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "Adding numbers to Span(0) :" << std::endl;
		Span sp(0);
		try
		{
			sp.addNumber(7);
		}
		catch (std::exception & e)
		{
			std::cout << "Couldn't add number" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Adding 3 numbers to Span(2) :" << std::endl;
		Span sp(2);
		try
		{
			sp.addNumber(1);
			sp.addNumber(8);
			sp.addNumber(7);
			sp.printNumbers();
			std::cout << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Couldn't add number" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Span tmp = Span(10);
		Span sp(5);

		sp.addNumber(29);
		sp.addNumber(3);

		sp = tmp;
		sp.addRange(-5, 4);

		std::cout << "Range test for sp = ( ";
		sp.printNumbers();
		std::cout << ")" << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "Adding range(3, 10) to Span(0) :" << std::endl;
		Span sp(0);
		try
		{
			sp.addRange(3, 10);
		}
		catch (std::exception & e)
		{
			std::cout << "Couldn't add number" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Adding range(0, 3) to Span(3) :" << std::endl;
		Span sp(3);
		try
		{
			sp.addRange(0, 3);
		}
		catch (std::exception & e)
		{
			std::cout << "Couldn't add number" << std::endl;
		}
	}
	return 0;
}
