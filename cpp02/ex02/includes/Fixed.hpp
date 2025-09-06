/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:43:33 by rafael            #+#    #+#             */
/*   Updated: 2025/09/06 18:24:18 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>


class Fixed
{
    private:
        int _value;
        static const int _fractionalBits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed &operator=(const Fixed &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed operator+(const Fixed &copy) const;
        Fixed operator-(const Fixed &copy) const;
        Fixed operator*(const Fixed &copy) const;
        Fixed operator/(const Fixed &copy) const;
        bool operator>(const Fixed &copy) const;
        bool operator<(const Fixed &copy) const;
        bool operator<=(const Fixed &copy) const;
        bool operator>=(const Fixed &copy) const;
        bool operator==(const Fixed &copy) const;
        bool operator!=(const Fixed &copy) const;
        static Fixed &min(Fixed &n1, Fixed &n2);
        static const Fixed &min(const Fixed &n1, const Fixed &n2);
        static Fixed &max(Fixed &n1, Fixed &n2);
        static const Fixed &max(const Fixed &n1, const Fixed &n2);
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
    };

std::ostream &operator<<(std::ostream &out, const Fixed &nb);





#endif