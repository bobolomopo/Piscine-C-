#ifndef SPAN_HPP
# define SPAN_HPP

# include <limits>
# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span
{
private:
	Span(void);

	unsigned int _n;
	std::vector<int> _data;

protected:

public:
	Span(unsigned int);
	Span( Span const & src );
	Span& operator=( Span const & rhs );
	~Span(void);

	void addNumber(int);
	void addRange(int, int);
	void printNumbers(void);
	int shortestSpan(void);
	int longestSpan(void);

};

#endif
