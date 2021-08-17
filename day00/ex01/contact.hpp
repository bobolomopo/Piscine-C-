/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:29:44 by jandre            #+#    #+#             */
/*   Updated: 2021/08/17 18:41:14 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <experimental/string_view>
# include <iostream>
# include <sstream>
# include <string>
# include <iomanip>

class   contact
{
	public:
	contact(void);
	~contact(void);

	void				get_info(void);
	void				add_contact(void);
	void				display_contact(int i);
	std::experimental::string_view	print_max(std::experimental::string_view sv, std::size_t width);

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif