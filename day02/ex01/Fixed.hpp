/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jandre <ajuln@hotmail.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:43:46 by jandre            #+#    #+#             */
/*   Updated: 2021/08/19 12:59:40 by jandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED
# include <string>
# include <iostream>

class Fixed {
    private:
		int					value;
		static const int	fractional_bits = 8;
    
    public:
        Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);

		Fixed &operator=(const Fixed &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif
