/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:33:46 by rafael            #+#    #+#             */
/*   Updated: 2025/10/15 02:53:10 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	_name = "default";
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	_HitPoints = FragTrap::_HitPoints;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) : ClapTrap(original),
	ScavTrap(original), FragTrap(original), _name(original._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &original)
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

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
