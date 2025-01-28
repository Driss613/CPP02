/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:53:10 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/28 11:11:29 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private :
		int					_integer;
		static const int	_integer_s = 8;

	public :
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();
		const Fixed&	operator=(const Fixed& hrs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif