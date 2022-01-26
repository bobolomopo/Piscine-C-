#include "Span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span( unsigned int n) : _n(n)
{
	return ;
}

Span::Span( Span const & src )
{
	*this = src;
	return ;
}

Span &Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_data = rhs._data;
	}
	return *this;
}

Span::~Span(void)
{
	return ;
}

void Span::addNumber(int nb)
{
	if (this->_data.size() >= this->_n)
		throw std::exception();
	this->_data.push_back(nb);
}

void Span::addRange(int min, int max)
{
	for (; min <= max; min++)
		this->addNumber(min);
}

void Span::printNumbers(void)
{
	if (this->_n)
	{
		std::vector<int>::iterator it;
		for (it = this->_data.begin(); it != this->_data.end(); it++)
			std::cout << *it << " ";
	}
}

int Span::shortestSpan(void)
{
	if (this->_n < 2)
		throw std::exception();
	std::vector<int> tmp(this->_data);
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	int ans = abs(*(tmp.end() - 1) - *(tmp.begin()));
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		if (it + 1 != tmp.end())
			ans = std::min(ans, abs(*(it + 1) - *it));
	}
	return ans;
}

int Span::longestSpan(void)
{
	if (this->_n < 2)
		throw std::exception();
	std::vector<int> tmp(this->_data);
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	int ans = abs(*(tmp.end() - 1) - *(tmp.begin()));
	for (it = tmp.begin(); it != tmp.end(); it++)
	{
		if (it + 1 != tmp.end())
			ans = std::max(ans, abs(*(it + 1) - *it));
	}
	return ans;
}
