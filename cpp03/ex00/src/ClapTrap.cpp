/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:55:45 by rafael            #+#    #+#             */
/*   Updated: 2025/10/15 00:32:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap()
{
    _name = "Default";
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamage = 0;
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original) :_name(original._name), _HitPoints(original._HitPoints),
      _EnergyPoints(original._EnergyPoints),
      _AttackDamage(original._AttackDamage)

{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &original)
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

void ClapTrap::attack(const std::string& target)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return ;
    }
    if (_EnergyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " doesn't have energy !" << std::endl;
        return ;
    }
    _EnergyPoints--;
    std::cout << "ClapTrap " << _name 
              << " attacks " << target 
              << " causing " << _AttackDamage 
              << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return ;
    }
    _HitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    if (_HitPoints < 1)
    { 
        std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
        _HitPoints = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return ;
    }
    if (_EnergyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " doesn't have energy !" << std::endl;
        return ;
    }
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0 && this->_HitPoints + amount <= 10)
    {
        this->_HitPoints += amount;
        std::cout << "ClapTrap " << this->_name 
                  << " repaired itself and gained " << amount 
                  << " hit points, now has " << this->_HitPoints 
                  << " hit points." << std::endl;
        this->_EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
}

int ClapTrap::get_HitPoints() const
{
    if (_HitPoints < 1)
        std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " has " << _HitPoints << " hit points!" << std::endl;
    return (_HitPoints);
}

int ClapTrap::get_EnergyPoints() const
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return (0);        
    }
    if (_EnergyPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " doesn't have energy !" << std::endl;
        return (0);
    }
    else
        std::cout << "ClapTrap " << _name << " has " << _EnergyPoints << " energy points !" << std::endl;
    return (_EnergyPoints);
}

int ClapTrap::get_AttackDamage() const
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return (0);        
    }
    std::cout << "ClapTrap " << _name << " has " << _AttackDamage << " attack damage !" << std::endl;
    return (_AttackDamage);
}

std::string ClapTrap::get_Name() const
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return (_name);        
    }
    std::cout << "ClapTrap name is " << _name << std::endl;
	return (_name);
}

void ClapTrap::set_HitPoints(int HitPoints)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        _HitPoints = 0;
        return ;        
    }
    _HitPoints = HitPoints;
    std::cout << "ClapTrap " << _name << " now has " << _HitPoints << " hit points!" << std::endl;
}

void ClapTrap::set_EnergyPoints(int EnergyPoints)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        _EnergyPoints = 0;
        return ;        
    }
    _EnergyPoints = EnergyPoints;
    std::cout << "ClapTrap " << _name << " now has " << _EnergyPoints << " energy points !" << std::endl;
}

void ClapTrap::set_AttackDamage(int AttackDamage)
{
    if (_HitPoints < 1)
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        _AttackDamage = 0;
        return ;        
    }
    _AttackDamage = AttackDamage;
    std::cout << "ClapTrap " << _name << " now has " << _AttackDamage << " attack damage !" << std::endl;
}

void ClapTrap::set_Name(std::string name)
{
    if (_HitPoints < 1) 
    {
        std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
        return ;        
    }
    std::cout << "ClapTrap changed name from " << _name << " to " << name << std::endl;
    _name = name;
}
