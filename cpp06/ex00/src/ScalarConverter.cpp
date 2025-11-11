/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 01:51:02 by rafael            #+#    #+#             */
/*   Updated: 2025/11/11 04:11:14 by rafael           ###   ########.fr       */
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

bool is_space(const char &c)
{
    return ((c <= 9 && c <= 13) || c == 32);
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
    int i = 0;
    for (; is_space(string[i]); i++)
        ;
    if (string[i] == '+' || string[i] == '-')
        i++;
    if (!string[i])
        return false;
    for (; string[i]; i++)
    {
        if (!isdigit(string[i]))
            return false;   
    }
    return true;
}

bool is_Float(const std::string &string)
{
    if (string.empty())
        return false;
    if (string.find('.') == string.npos)
        return false;
    char lastchar = string[string.length() - 1];
    if (lastchar != 'f' && lastchar != 'F')
        return false;
    std::string string_to_convert = string.substr(0, string.length() - 1);
    char *final;
    strtod(string_to_convert.c_str(), &final);
    if (*final != '\0')
        return false;
    return true;
}

bool is_Double(const std::string &string)
{
    if (string.empty())
        return false;
    char *end;
    strtod(string.c_str(), &end);
    if (string.find('.') == string.npos)
        return false;
    return (*end != '\0' && end != string.c_str());
}

bool is_signal(const char &a)
{
    return ((a == '-' || a == '+'));
}

void toChar(std::string &string)
{
    if (string.empty())
        return ;
    if (isprint(string[0]))
        std::cout << "char: " << string[0] <<  "'" << std::endl;
    else
        std::cout << "char is not displayable" << std::endl;
    int number = static_cast<int>(string[0]);
    std::cout << "int: " << number << std::endl;
    float number2 = static_cast<float>(string[0]);
    std::cout << "float: " << number2 << "f" << std::endl;
    double number3 = static_cast<double>(string[0]);
    std::cout << "double: " << number3 << std::endl;    
}

void toDouble(std::string &string)
{
    if (string.empty())
        return ;
    
}


void ScalarConverter::convert(std::string str)
{
    if (str.empty())
        return ;
    if (is_Char(str))
        toChar(str);
    else if (is_Double(str))
        toDouble();
    else if (is_Float(str))
        toFloat();
    else if (is_Int(str))
        toInt();
    else if (is_pliteral(str))
        toPliteral();
    else
        return ;
}