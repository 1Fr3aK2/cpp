/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:43:31 by rafael            #+#    #+#             */
/*   Updated: 2025/11/11 16:53:03 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

bool is_space(const char &c)
{
    return ((c <= 9 && c <= 13) || c == 32);
}


bool is_signal(const char &a)
{
    return ((a == '-' || a == '+'));
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

void toChar(std::string &string)
{
    if (string.empty())
        return ;
    if (isprint(string[0]))
        std::cout << "char: " << string[0] << std::endl;
    else
        std::cout << "char is not displayable" << std::endl;
    int number = static_cast<int>(string[0]);
    std::cout << "int: " << number << std::endl;
    float number2 = static_cast<float>(string[0]);
    std::cout << "float: " << number2 << "f" << std::endl;
    double number3 = static_cast<double>(string[0]);
    std::cout << "double: " << number3 << std::endl;    
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "fck u" << std::endl;
        return 1;
    }

    std::string arg(argv[1]);  // Convert C-string to std::string

    if (is_Char(arg.c_str()))  // assuming is_Char expects char*
        toChar(arg);
    else
        std::cout << "isn't an integer" << std::endl;

    return 0;
}
