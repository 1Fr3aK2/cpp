/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:59:50 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 21:39:08 by rafael           ###   ########.fr       */
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
    int i = 0;
    while(i < 4)
    {
        if (level == levels[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*functions[0])();
            // fallthrough
        case 1:
            (this->*functions[1])();
            // fallthrough
        case 2:
            (this->*functions[2])();
            // fallthrough
        case 3:
            (this->*functions[3])();        
            break;
        default:
            std::cout << "Invalid: Instruction not found" << std::endl;
    }
}