/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:48:21 by rafael            #+#    #+#             */
/*   Updated: 2025/09/06 18:31:15 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>


const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
    _value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}
Fixed::Fixed(const int nb)
{
    _value = nb << _fractionalBits;
}
Fixed::Fixed(const float nb)
{
    _value = roundf(nb * (1 << _fractionalBits));   
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    _value = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}


float Fixed::toFloat() const
{
    return ((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt() const
{
    return (_value >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &nb)
{
    out << nb.toFloat();
    return (out);
}

Fixed Fixed::operator+(const Fixed &copy) const
{
    return (this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy) const
{
    return (this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy) const
{
    return (this->toFloat() * copy.toFloat());  
}

Fixed Fixed::operator/(const Fixed &copy) const
{
    return (this->toFloat() / copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
    return (this->toFloat() > copy.toFloat());
}

bool Fixed::operator<(const Fixed &copy) const
{
    return (this->toFloat() < copy.toFloat());    
}

bool Fixed::operator<=(const Fixed &copy) const
{
    return (this->toFloat() <= copy.toFloat());
}

bool Fixed::operator>=(const Fixed &copy) const
{
    return (this->toFloat() >= copy.toFloat());
}

bool Fixed::operator==(const Fixed &copy) const
{
    return (this->toFloat() == copy.toFloat());
}

bool Fixed::operator!=(const Fixed &copy) const
{
    return (this->toFloat() != copy.toFloat());
}

Fixed &Fixed::operator++() //pre
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator++(int) //pos
{
    Fixed temp(*this);
    operator++();
    return (temp);
}

Fixed &Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    operator--();
    return (temp);
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2)
{
    return (n1 < n2 ? n1 : n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
    return (n1 < n2 ? n1 : n2);
}
Fixed &Fixed::max(Fixed &n1, Fixed &n2)
{
    return (n1 > n2 ? n1 : n2);
}
const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
    return (n1 > n2 ? n1 : n2);
}