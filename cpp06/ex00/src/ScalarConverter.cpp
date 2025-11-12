/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 01:51:02 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 12:22:21 by raamorim         ###   ########.fr       */
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
    if (!isdigit(string[0]))
        return true;
    return false;
}

bool is_Int(const std::string &string)
{
    if (string.empty())
        return false;
    int i = 0;
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

bool is_Pliteral(std::string &string)
{
    if (string.empty())
        return (false);
    if (string == "+inff" || string == "+inf" || string == "-inff" || string == "-inf" || string == "nan" || string == "nanf")
        return true;
    return false;
}
bool is_signal(const char &a)
{
    return ((a == '-' || a == '+'));
}

void toChar(std::string &string)
{
    if (isprint(string[0]))
        std::cout << "char: '" << string[0] <<  "'" << std::endl;
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
    try
    {
        if (string.find('-') != string.npos && string.length() > 9)
            throw std::exception();
        else if  (string.find('-') == string.npos && string.length() > 8)
            throw std::exception();
        double nb = std::atof(string.c_str());
        if (nb >= 0 && nb <= 127)
        {
            if (std::isprint(static_cast<int>(nb)))
                std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double: " << nb << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
    }
    
}

void toFloat(std::string &string)
{
    try
    {
         if (string.find('-') != string.npos && string.length() > 10)
            throw std::exception();
        else if  (string.find('-') == string.npos && string.length() > 9)
            throw std::exception();
        float nb = std::atof(string.c_str());
        if (nb >= 0 && nb <= 127)
        {
            if (std::isprint(static_cast<int>(nb)))
                std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
		std::cout << "float: " << nb << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(nb) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
    }
}


void toInt(std::string &string)
{
    try
    {
        for (int i = 0; string[i]; i++)
        {
            if (!isdigit(string[i]) && !is_signal(string[i]))
                throw std::exception();
        }

        long nb = std::atol(string.c_str());
        if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
            throw std::exception();

        if (nb >= 0 && nb <= 127)
        {
            if (std::isprint(static_cast<int>(nb)))
                std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
            else
                std::cout << "char: Non displayable" << std::endl;
        }
        else
            std::cout << "char: impossible" << std::endl;

        std::cout << "int: " << nb << std::endl;
        std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
    }
    catch (const std::exception &)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}


void toPliteral(std::string &string)
{
    if (string == "+inff" || string == "+inf")
    {
        std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "+inff" << std::endl;
		std::cout << "double: " << "+inf" << std::endl;
    }
    else if (string == "-inff" || string == "-inf")
    {
        std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "-inff" << std::endl;
		std::cout << "double: " << "-inf" << std::endl;
    }
    else if (string == "nan" || string == "nanf")
    {
        std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << "nanf" << std::endl;
		std::cout << "double: " << "nan" << std::endl;
    }
}
void ScalarConverter::convert(std::string str)
{
    try
    {
        if (str.empty())
            throw std::exception();
        size_t start = 0;
        for (; start < str.length() && is_space(str[start]); start++)
            ;
        size_t end = str.length();
        while (end > start && is_space(str[end - 1]))
            end--;
        std::string string = str.substr(start, end - start);
        if (string.empty())
            throw std::exception();
        if (is_Char(string))
            toChar(string);
        else if (is_Double(string))
            toDouble(string);
        else if (is_Float(string))
            toFloat(string);
        else if (is_Int(string))
            toInt(string);
        else if (is_Pliteral(string))
            toPliteral(string);
        else
            throw std::exception();
    }
    catch (const std::exception &)
    {
        std::cerr << "Invalid type of number" << std::endl;
    }
}

