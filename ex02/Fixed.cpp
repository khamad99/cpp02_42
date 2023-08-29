/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:21:35 by kalshaer          #+#    #+#             */
/*   Updated: 2023/08/23 15:01:12 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed::Fixed(const int value) : _value(value * (1 << this->_bits))
{
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << this->_bits)))
{
}

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
    return (this->_value / (1 << this->_bits));
}

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
    o << src.toFloat();
    return (o);
}

bool Fixed::operator>(Fixed const &src) const
{
    return (this->_value > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src) const
{
    return (this->_value < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src) const
{
    return (this->_value >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src) const
{
    return (this->_value <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src) const
{
    return (this->_value == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src) const
{
    return (this->_value != src.getRawBits());
}

Fixed Fixed::operator+(Fixed const &src) const
{
    return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(Fixed const &src) const
{
    return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(Fixed const &src) const
{
    return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(Fixed const &src) const
{
    return (Fixed(this->toFloat() / src.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

