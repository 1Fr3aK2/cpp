/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:33:46 by raamorim          #+#    #+#             */
/*   Updated: 2025/10/08 17:33:47 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/megaphone.hpp"

bool getteline(std::string &cmd)
{
    if (!std::getline(std::cin, cmd))
        return false;
    return true;
}

void formatStr(std::string &input)
{
    for (size_t i = 0; i < input.length(); i++)
    {
        if (input[i] == '\t')
            input[i] = ' ';
    }
}

bool getInput(std::string &input)
{
    if (!getteline(input))
        return false;
    if (input.empty())
    {
        std::cout << "Input has to be valid" << std::endl;
        return true;
    }
    formatStr(input);
    return true;
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    PhoneBook phonebook;
    std::string cmd;

    while (true)
    {
        std::cout << "Enter a command: ";
        if (!getteline(cmd))
        {
            std::cout << "EOF, leaving ..." << std::endl;
            break;
        }

        if (cmd == "EXIT")
            break;
        else if (cmd == "ADD")
            phonebook.Add();
        else if (cmd == "SEARCH")
            phonebook.Search();
        else
            std::cout << "Invalid command" << std::endl;    
    }
    return 0;
}
