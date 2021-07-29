/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:38:49 by jandre            #+#    #+#             */
/*   Updated: 2021/07/29 17:08:37 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
    return ;
}

contact::~contact(void)
{
    return ;
}

void	contact::get_info(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void	contact::add_contact(void)
{
	std::cout << "Answer question about the new contact please:" << std::endl << std::endl;
	std::cout << "What is the first name of the contact?" << std::endl;
	getline(std::cin, this->first_name);
	std::cout << "What is the last name of the contact?" << std::endl;
	getline(std::cin, this->last_name);
	std::cout << "What is the nickname of the contact?" << std::endl;
	getline(std::cin, this->nickname);
	std::cout << "What is the phone number of the contact?" << std::endl;
	getline(std::cin, this->phone_number);
	std::cout << "What is the darkest secret of the contact?" << std::endl;
	getline(std::cin, this->darkest_secret);
	std::cout << "You have a new contact! Congrats :)" << std::endl;
}

std::string_view	contact::print_max(std::string_view sv, std::size_t width)
{
	return (sv.substr(0, width));
}

void	contact::display_contact(int i)
{
	std::cout << "         " << i + 1 << "|";
	if (this->first_name.size() >= 10)
		std::cout << std::setw(9) << print_max(this->first_name, 9) << ".|";
	else
		std::cout << std::setw(10) << print_max(this->first_name, 10) << "|";
	if (this->last_name.size() >= 10)
		std::cout << std::setw(9) << print_max(this->last_name, 9) << ".|";
	else
		std::cout << std::setw(10) << print_max(this->last_name, 10) << "|";
	if (this->nickname.size() >= 10)
		std::cout << std::setw(9) << print_max(this->nickname, 9) << ".|";
	else
		std::cout << std::setw(10) << print_max(this->nickname, 10) << "|";
	std::cout << std::endl;
	return ;
}