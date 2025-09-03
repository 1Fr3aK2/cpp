/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:00:09 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 21:01:37 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>


class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        std::string levels[4];
        void (Harl:: *functions[4])();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};


#endif