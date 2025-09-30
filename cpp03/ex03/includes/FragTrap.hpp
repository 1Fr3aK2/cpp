/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:55:07 by rafael            #+#    #+#             */
/*   Updated: 2025/09/30 00:02:40 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& original);
        ~FragTrap();
        FragTrap& operator=(const FragTrap& original);
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif