/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:53:05 by rafael            #+#    #+#             */
/*   Updated: 2025/09/05 17:05:21 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>


const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}
Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _value = nb << _fractionalBits;
}
Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(nb * (1 << _fractionalBits));   
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _value = copy.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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