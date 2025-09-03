/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:08:17 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 21:08:18 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc != 2)
    {
        std::cerr << "Invalid number of arguments !" << std::endl;
        return (1);
    }
    for (int i = 1; i < argc; i++)
        harl.complain(argv[i]);
    return (0);
}