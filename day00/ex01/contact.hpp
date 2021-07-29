/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <jandre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:29:44 by jandre            #+#    #+#             */
/*   Updated: 2021/07/29 17:00:25 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <sstream>
# include <iomanip>
# include <string_view>
//# include <string>

class   contact
{
	public:
	contact(void);
	~contact(void);

	void				get_info(void);
	void				add_contact(void);
	void				display_contact(int i);
	std::string_view	print_max(std::string_view sv, std::size_t width);

	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif