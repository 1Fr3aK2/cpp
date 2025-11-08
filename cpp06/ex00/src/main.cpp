/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:43:31 by rafael            #+#    #+#             */
/*   Updated: 2025/11/08 17:09:31 by rafael           ###   ########.fr       */
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

bool is_Int(const std::string &string)
{
    std::cout << string << std::endl;
    if (string.empty())
        return false;
    int i = 0;
    for (; is_space(string[i]); i++)
        ;
    if (is_signal(string[i]))
        i++;
    if (!string[i])
        return false;
    for (int i = 1; string[i]; i++)
    {
        if (!isdigit(string[i]))
            return (false);   
    }
    return (true);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "fck u" << std::endl;
        return 1;
    }
    if (is_Int(argv[1]))
        std::cout << "is an integer" << std::endl;
    else
        std::cout << "isn't an integer" << std::endl;
    return 1;
}