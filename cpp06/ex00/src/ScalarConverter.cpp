/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 01:51:02 by rafael            #+#    #+#             */
/*   Updated: 2025/11/08 16:48:54 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarSconverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
    std::cout << "ScalarSconverter copy constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarSconverter destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    std::cout << "Scalarconverter assignment operator called" << std::endl;
    return (*this);
}

bool is_Char(const std::string &string)
{
    if (string.empty())
        return false;
    if (string.length() != 1)
        return false;
    if (isdigit(string[0]))
        return true;
    return false;
}

bool is_Int(const std::string &string)
{
    if (string.empty())
        return false;
    for (int i = 0; string[i]; i++)
    {
        if (is_signal(string[i]) && ((!string[i + 1]) || is_signal(string[i + 1] || !isdigit(string[i + 1]))))
            return false;
        else if (isdigit(string[i]) && is_signal(string[i + 1]))
            return false;       
    }
    return (true);
}

bool is_Float(const std::string &string)
{
    if (string.empty())
        return false;
    
}

bool is_Double(const std::string &string)
{
    if (string.empty())
        return false;
}

bool is_signal(const char &a)
{
    return ((a == '-' || a == '+'));
}