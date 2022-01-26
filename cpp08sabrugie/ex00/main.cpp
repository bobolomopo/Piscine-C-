#include  <iostream>
#include  <string>
#include  <vector>
#include  <list>
#include "easyfind.hpp"

template<typename T>
void try_find(T& data, int toFind)
{
	try
	{
		easyfind(data, toFind);
		std::cout << toFind << " found !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << toFind << " not found" << std::endl;
	}
}

int main(void)
{
	// Testing Vector
	{
		std::vector<int> vec;
		for (int i = 0; i < 10; i++)
			vec.push_back(i * 3);
		std::cout << "Testing vector ( ";
		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << " ";
		std::cout << ") :" << std::endl;
		try_find(vec, 5);
		try_find(vec, 9);
		try_find(vec, 2);
		try_find(vec, 12);
		try_find(vec, -9);
		std::cout << std::endl << "Testing empty vector :" << std::endl;
		std::vector<int> empty;
		try_find(empty, 182);
		std::cout << std::endl;
	}

	// Testing List
	{
		std::list<int> lst;
		for (int i = 9; i < 20; i++)
			lst.push_back(i * 2);
		std::cout << "Testing list ( ";
		for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
			std::cout << *it << " ";
		std::cout << ") :" << std::endl;
		try_find(lst, 5);
		try_find(lst, 20);
		try_find(lst, 23);
		try_find(lst, 36);
		try_find(lst, -18);
		std::cout << std::endl << "Testing empty list :" << std::endl;
		std::list<int> empty;
		try_find(empty, 182);
	}
	return 0;
}
