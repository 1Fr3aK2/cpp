/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 23:01:04 by rafael            #+#    #+#             */
/*   Updated: 2025/08/31 11:19:14 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/megaphone.hpp"

void getteline(t_string &cmd)
{
    std::getline(std::cin, cmd);
    if (std::cin.eof())
    {
        std::cout << "EOF, leaving ..." << std::endl;
        exit(0);
    }
}

void formatStr(t_string &input)
{
    for (int i = 0; i < (int)input.length(); i++)
    {
        if (input[i] == '\t')
            input[i] = ' ';
    }
}

void getInput(t_string &input)
{
    getteline(input);
    if (input.empty())
        std::cout << "Input has to be valid" << std::endl;
    else
        formatStr(input);
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    PhoneBook phonebook;
    t_string cmd;

    while (1)
    {
        std::cout << "Enter a command: ";
        getteline(cmd);

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
