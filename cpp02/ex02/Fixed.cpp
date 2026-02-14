/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:11:02 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/16 23:13:40 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
    : rawValue(0)
{
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::Fixed(const int value)
{
	this->rawValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->rawValue = static_cast<int>(roundf(value * (1 << this->fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->rawValue = other.rawValue;
    return *this;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->rawValue) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->rawValue / (1 << this->fractionalBits));
}

int Fixed::getRawBits(void) const
{
    return rawValue;
}

void Fixed::setRawBits(int const raw)
{
    rawValue = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
