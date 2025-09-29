/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 02:23:46 by rafael            #+#    #+#             */
/*   Updated: 2025/09/29 18:39:06 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int main() {
	{
		ScavTrap n1;
		ScavTrap n2("Rafael");
		ScavTrap n3("ScavTrap");
		ScavTrap n4(n2);

		n1.attack("Rafael");
		n2.takeDamage(n1.get_AttackDamage());
		n2.get_HitPoints();
		n2.beRepaired(5);
		std::cout << std::endl;

		n3.attack("Rafael");
		n3.takeDamage(n2.get_AttackDamage());
		n3.get_HitPoints();
		std::cout << std::endl;

		n2.set_AttackDamage(10);
		n2.attack("Claptrap3");
		n3.takeDamage(n2.get_AttackDamage());
		n3.beRepaired(5);
		std::cout << std::endl;

		n4.get_HitPoints();
		n4.get_EnergyPoints();
		n4.get_AttackDamage();
		n4.get_Name();
		std::cout << std::endl;

		n1.guardGate();
		n2.guardGate();
		n3.guardGate();
		n4.guardGate();
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << std::endl;
	{
		ScavTrap test("test");

		test.attack("enemy");
		test.takeDamage(10);
		test.get_HitPoints();
		test.beRepaired(5);
		test.guardGate();
	}
	return 0;
}