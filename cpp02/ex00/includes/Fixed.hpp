/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:58:40 by rafael            #+#    #+#             */
/*   Updated: 2025/09/05 15:44:50 by rafael           ###   ########.fr       */
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
        Fixed (const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif