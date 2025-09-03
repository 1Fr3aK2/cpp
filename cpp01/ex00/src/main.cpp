/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:28:25 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:29:48 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

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