/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:50:52 by jandre            #+#    #+#             */
/*   Updated: 2022/01/26 18:51:57 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{

	Array<int> a = Array<int>(3);
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}

	std::cout << "-----------" << std::endl;

	Array<char> b = Array<char>(3);
	b[0] = 'a';
	b[1] = 'b';
	b[2] = 'c';

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	std::cout << "-----------" << std::endl;

	Array<char> c = Array<char>(b);

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << std::endl;

	std::cout << "-----------" << std::endl;

	Array<std::string> str1 = Array<std::string>();
	Array<std::string> str2 = Array<std::string>(4);
	str2[0] = "how";
	str2[1] = "are";
	str2[2] = "you";
	str2[3] = "?";

	str1 = str2;
	for (int i = 0; i < 4; i++)
		std::cout << str1[i] << " ";
	std::cout << std::endl << "Size = " << str1.size() << std::endl;

	std::cout << "-----------" << std::endl;

	try{
		a[80];
		b[80];
		c[80];
	}
	catch (std::exception & exception){
		std::cout << exception.what() << std::endl;
		return 0;
	}

	std::cout << "-----------" << std::endl;

	return 0;
}