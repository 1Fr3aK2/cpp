/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 22:17:21 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:30:10 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " destructor called" << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}