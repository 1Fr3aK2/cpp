/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 23:34:08 by rafael            #+#    #+#             */
/*   Updated: 2025/09/29 23:53:44 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& original);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& original);
        void attack(const std::string& target);
        void whoAmI();
};

#endif