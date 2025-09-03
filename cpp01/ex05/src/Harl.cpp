/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:35:02 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 20:33:02 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl()
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

Harl::~Harl()
{
    
}

void Harl::debug()
{
    std::cout << "[ DEBUG ] Nothing like another log line to spam the terminal." << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ] Update: the program hasn’t crashed yet." << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ] Not to scare you, but maybe get the fire extinguisher ready." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ] Congrats, you just broke everything." << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;    
        }
    }
    std::cout << "Invalid: No function found" << std::endl;
}