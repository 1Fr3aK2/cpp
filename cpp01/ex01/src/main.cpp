/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:20:10 by rafael            #+#    #+#             */
/*   Updated: 2025/10/10 15:17:57 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main()
{
    Zombie *zombies = zombieHorde(5, "Zombie");
    Zombie *zombie2;
    for (int i = 0; i < 5; i++)
        zombies[i].announce();
    zombie2 = zombieHorde(3, "zombie2");
    for (int i = 0; i < 3; i++)
        zombie2[i].announce();
    delete[] zombies;
    delete[] zombie2;
}