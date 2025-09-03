/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:53:18 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 21:41:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);  
};

Zombie* zombieHorde(int N, std::string name);

#endif

