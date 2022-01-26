#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <algorithm>

template<typename T>
int& easyfind(T& data, int toFind)
{
	typename T::iterator it;
	it = std::find(data.begin(), data.end(), toFind);
	if (it != data.end())
		return(*it);
	throw std::exception();
}

#endif
