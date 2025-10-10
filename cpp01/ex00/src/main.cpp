/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:28:25 by rafael            #+#    #+#             */
/*   Updated: 2025/10/10 15:13:25 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main()
{
    Zombie *zombie;
    zombie = newZombie("Zombie1");
    zombie->announce();
    randomChump("Zombie2");
    randomChump("Zombie3");
    zombie->announce();
    delete (zombie);
    return (0);
}