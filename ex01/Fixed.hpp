/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:53:10 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/28 19:07:44 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int					_integer;
		static const int	_nb_bits = 8;

	public :
		Fixed();
		Fixed(const int& entier);
		Fixed(const float& pasentier);
		Fixed(const Fixed& copy);
		~Fixed();
		const Fixed&		operator=(const Fixed& hrs);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& hrs);
#endif