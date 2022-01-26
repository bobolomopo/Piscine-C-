#include "MutantStack.hpp"
#include <list>

void test1(void)
{
	std::cout << "TEST 1" << std::endl;
	// MutantStack
	{
		std::cout << "MutantStack :" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	// List
	{
		std::cout << std::endl << "List :" << std::endl;
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << std::endl << "----------------" << std::endl << std::endl;
}

void test2(void)
{
	std::cout << "TEST 2" << std::endl;
	// MutantStack
	{
		try {
			std::cout << "MutantStack :" << std::endl;
			MutantStack<int> s;

			for (size_t i = 0; i < 5; i++)
				s.push(0);
			for (size_t i = 0; i < 3; i++)
				s.pop();

			s.push(29);
			s.push(26);

			std::cout << s.top() << std::endl;

			s.pop();

			s.push(-9);
			s.push(14);

			MutantStack<int> tmp(s);
			MutantStack<int> mstack;

			mstack = tmp;

			std::cout << "src size : " << s.size() << std::endl;
			std::cout << "cpy size : " << mstack.size() << std::endl;

			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();

			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
			std::cout << "src.pop() x 2 :" << std::endl;
			s.pop();
			s.pop();

			std::cout << "src size : " << s.size() << std::endl;
			std::cout << "tmp size : " << tmp.size() << std::endl;
			std::cout << "cpy size : " << mstack.size() << std::endl;

			std::stack<int> test = mstack;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	// List
	{
		try {
			std::cout << std::endl << "List :" << std::endl;
			std::list<int> s;

			for (size_t i = 0; i < 5; i++)
				s.push_back(0);
			for (size_t i = 0; i < 3; i++)
				s.pop_back();

			s.push_back(29);
			s.push_back(26);

			std::cout << s.back() << std::endl;

			s.pop_back();

			s.push_back(-9);
			s.push_back(14);

			std::list<int> tmp(s);
			std::list<int> lst;

			lst = tmp;
			std::cout << "src size : " << s.size() << std::endl;
			std::cout << "cpy size : " << lst.size() << std::endl;

			std::list<int>::iterator it = lst.begin();
			std::list<int>::iterator ite = lst.end();

			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}

			std::cout << "src.pop() x 2 :" << std::endl;
			s.pop_back();
			s.pop_back();

			std::cout << "src size : " << s.size() << std::endl;
			std::cout << "tmp size : " << tmp.size() << std::endl;
			std::cout << "cpy size : " << lst.size() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

int main()
{
	test1();
	test2();
	return 0;
}
