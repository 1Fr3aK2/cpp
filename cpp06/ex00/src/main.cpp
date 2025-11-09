/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:43:31 by rafael            #+#    #+#             */
/*   Updated: 2025/11/09 03:50:44 by rafael           ###   ########.fr       */
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

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "fck u" << std::endl;
        return 1;
    }
    if (is_Float(argv[1]))
        std::cout << "is an integer" << std::endl;
    else
        std::cout << "isn't an integer" << std::endl;
    return 1;
}