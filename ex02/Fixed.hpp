/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:53:10 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/28 21:29:09 by drabarza         ###   ########.fr       */
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
		bool				operator>(const Fixed& hrs) const;
		bool				operator<(const Fixed& hrs) const;
		bool				operator>=(const Fixed& hrs) const;
		bool				operator<=(const Fixed& hrs) const;
		bool				operator==(const Fixed& hrs) const;
		bool				operator!=(const Fixed& hrs) const;
		bool				operator+(const Fixed& hrs) const;
		bool				operator-(const Fixed& hrs) const;
		bool				operator*(const Fixed& hrs) const;
		bool				operator/(const Fixed& hrs) const;
		Fixed				operator++(int);
		Fixed&				operator++();
		Fixed				operator--(int);
		Fixed&				operator--();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed&				min(Fixed& a, Fixed& b);
		static const Fixed&		min(const Fixed& a, const Fixed& b);
		static Fixed&				max(Fixed& a, Fixed& b);
		static const Fixed&		max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& hrs);
#endif