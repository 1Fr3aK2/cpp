/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 02:25:12 by rafael            #+#    #+#             */
/*   Updated: 2025/09/30 00:02:46 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap
{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& original);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& original);
        void attack(const std::string& target);
        void guardGate();
};


#endif