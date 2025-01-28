/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drabarza <drabarza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:52:44 by drabarza          #+#    #+#             */
/*   Updated: 2025/01/26 15:02:44 by drabarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_integer = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int& entier)
{
	std::cout << "Int constructor called" << std::endl;
	_integer = entier << _nb_bits;
}

Fixed::Fixed(const float& pasentier)
{
	std::cout << "Float constructor called" << std::endl;
	_integer = pasentier * (1 << _nb_bits);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

const Fixed&	Fixed::operator=(const Fixed &hds)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &hds)
		_integer = hds._integer;
	return (*this);
}

bool	Fixed::operator>(const Fixed& hrs)
{
	return (this->getRawBits() > hrs.getRawBits());
}

bool	Fixed::operator<(const Fixed& hrs)
{
	return (this->getRawBits() < hrs.getRawBits());
}

bool	Fixed::operator>=(const Fixed& hrs)
{
	return (this->getRawBits() >= hrs.getRawBits());
}

bool	Fixed::operator<=(const Fixed& hrs)
{
	return (this->getRawBits() >= hrs.getRawBits());
}

bool	Fixed::operator==(const Fixed& hrs)
{
	return (this->getRawBits() == hrs.getRawBits());
}

bool	Fixed::operator!=(const Fixed& hrs)
{
	return (this->getRawBits() != hrs.getRawBits());
}

bool	Fixed::operator+(const Fixed& hrs)
{
	return (this->getRawBits() + hrs.getRawBits());
}

bool	Fixed::operator-(const Fixed& hrs)
{
	return (this->getRawBits() - hrs.getRawBits());
}

bool	Fixed::operator*(const Fixed& hrs)
{
	return (this->getRawBits() * hrs.getRawBits());
}

bool	Fixed::operator/(const Fixed& hrs)
{
	return (this->getRawBits() / hrs.getRawBits());
}

Fixed&	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}
Fixed&	Fixed::operator++()
{
	this->_integer++;
	return(*this);
}
Fixed&	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}
Fixed&	Fixed::operator--()
{
	this->_integer--;
	return(*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_integer);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Destructor called" << std::endl;
	_integer = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_integer / (1 << _nb_bits) );
}

int	Fixed::toInt(void) const
{
	return (_integer >> _nb_bits);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& hrs)
{
	out << hrs.toFloat();
	return (out);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
