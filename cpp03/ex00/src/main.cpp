/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 02:55:28 by rafael            #+#    #+#             */
/*   Updated: 2025/09/27 22:44:35 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main()
{
	ClapTrap claptrap;
	ClapTrap claptrap2("Rafael");
	ClapTrap claptrap3("Claptrap3");
	ClapTrap claptrap4(claptrap2);

	claptrap.attack("Rafael");
	claptrap2.takeDamage(claptrap.get_AttackDamage());
	claptrap2.get_HitPoints();
	claptrap2.beRepaired(5);
	std::cout << std::endl;

	claptrap3.attack("Rafael");
	claptrap3.takeDamage(claptrap2.get_AttackDamage());
	claptrap3.get_HitPoints();
	std::cout << std::endl;

	claptrap2.set_AttackDamage(10);
	claptrap2.attack("Claptrap3");
	claptrap3.takeDamage(claptrap2.get_AttackDamage());
	claptrap3.beRepaired(5);
	std::cout << std::endl;

	claptrap4.get_HitPoints();
	claptrap4.get_EnergyPoints();
	claptrap4.get_AttackDamage();
	claptrap4.get_Name();

	return 0;
}