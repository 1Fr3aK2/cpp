/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:51:24 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 21:41:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return (zombie);   
}