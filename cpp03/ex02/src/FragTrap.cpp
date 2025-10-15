/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:54:58 by rafael            #+#    #+#             */
/*   Updated: 2025/10/15 00:54:33 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

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
    std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
    this->_name = original._name;
    this->_HitPoints = original._HitPoints;
    this->_EnergyPoints = original._EnergyPoints;
    this->_AttackDamage = original._AttackDamage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
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

void FragTrap::attack(std::string const &target) {
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap" << _name << " requested an high-five!" << std::endl;
}
