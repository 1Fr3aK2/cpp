/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:26:35 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:27:46 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
    
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    Weapon *weapon = _weapon;
    if (weapon == NULL)
        std::cout << _name << " has no weapon" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}