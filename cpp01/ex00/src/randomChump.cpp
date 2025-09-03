/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 23:24:37 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:30:05 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.h>

void randomChump(std::string name)
{
    Zombie random(name);
    random.announce();
}