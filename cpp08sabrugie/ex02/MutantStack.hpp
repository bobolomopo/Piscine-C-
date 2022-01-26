#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin(void) { return this->std::stack<T>::c.begin(); };
		const_iterator begin(void) const { return this->std::stack<T>::c.begin(); };
		iterator end(void) { return this->std::stack<T>::c.end(); };
		const_iterator end(void) const { return this->std::stack<T>::c.end(); };

};

#endif
