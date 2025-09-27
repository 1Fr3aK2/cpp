/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:38:36 by rafael            #+#    #+#             */
/*   Updated: 2025/09/27 22:35:07 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>


class ClapTrap
{
    private:
        std::string _name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& original);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& original);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_HitPoints() const;
        int get_EnergyPoints() const;
        int get_AttackDamage() const;
        std::string get_Name() const;
        void set_HitPoints(int HitPoints);
        void set_EnergyPoints(int EnergyPoints);
        void set_AttackDamage(int AttackDamage);
        void set_Name(std::string name);
    };


#endif