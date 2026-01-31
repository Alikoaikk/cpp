/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operators.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 21:25:02 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/16 23:30:07 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& other) const
{
    return this->rawValue > other.rawValue;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->rawValue < other.rawValue;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->rawValue >= other.rawValue;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->rawValue <= other.rawValue;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->rawValue == other.rawValue;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->rawValue != other.rawValue;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->rawValue + other.rawValue);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->rawValue - other.rawValue);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(((this->rawValue) * other.rawValue) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(((this->rawValue) << fractionalBits) / other.rawValue);
    return result;
}

Fixed& Fixed::operator++()
{
    this->rawValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->rawValue++;
    return *this ;
}

Fixed& Fixed::operator--()
{
    this->rawValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->rawValue--;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    return b;
}
