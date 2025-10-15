/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 02:44:56 by rafael            #+#    #+#             */
/*   Updated: 2025/10/15 00:52:53 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap()
{
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
     std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamage = 20;
    std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
    this->_name = original._name;
    this->_HitPoints = original._HitPoints;
    this->_EnergyPoints = original._EnergyPoints;
    this->_AttackDamage = original._AttackDamage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &original)
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

void ScavTrap::attack(std::string const &target) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}