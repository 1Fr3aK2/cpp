/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:22:34 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:30:01 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}