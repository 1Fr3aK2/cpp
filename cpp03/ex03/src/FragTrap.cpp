/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:54:58 by rafael            #+#    #+#             */
/*   Updated: 2025/09/30 01:01:34 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
    *this = original;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &original)
{
    if (this != &original)
    {
        this->_name = original._name;
        this->_AttackDamage = original._AttackDamage;
        this->_EnergyPoints = original._EnergyPoints;
        this->_HitPoints = original._HitPoints;
    }
    return (*this);
}

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << _name 
              << " attacks " << target 
              << ", causing " << _AttackDamage 
              << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
