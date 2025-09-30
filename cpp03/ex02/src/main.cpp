/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:59:46 by rafael            #+#    #+#             */
/*   Updated: 2025/09/29 23:01:14 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

int main() {
	{
		FragTrap n1;
		FragTrap n2("Rafael");
		FragTrap n3("FragTrap");
		FragTrap n4(n2);

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
		n2.attack("FragTrap");
		n3.takeDamage(n2.get_AttackDamage());
		n3.beRepaired(5);
		std::cout << std::endl;

		n4.get_HitPoints();
		n4.get_EnergyPoints();
		n4.get_AttackDamage();
		n4.get_Name();
		std::cout << std::endl;

		n1.highFivesGuys();
		n2.highFivesGuys();
		n3.highFivesGuys();
		n4.highFivesGuys();
	}
	std::cout << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << std::endl;
	{
		FragTrap test("test");

		test.attack("enemy");
		test.takeDamage(10);
		test.get_HitPoints();
		test.beRepaired(5);
		test.highFivesGuys();
	}
	return 0;
}