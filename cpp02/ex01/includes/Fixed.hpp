/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:36:04 by rafael            #+#    #+#             */
/*   Updated: 2025/09/05 17:00:47 by rafael           ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &nb);

#endif