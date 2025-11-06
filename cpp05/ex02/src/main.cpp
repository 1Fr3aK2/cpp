/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:01 by rafael            #+#    #+#             */
/*   Updated: 2025/11/06 23:26:39 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>

int main() {
	try
	{
		
		Bureaucrat highLevel("High Level", 1);
		Bureaucrat midLevel("Mid Level", 70);
		Bureaucrat lowLevel("Low Level", 135);

		ShrubberyCreationForm shrubberyForm("Home");
		RobotomyRequestForm robotomyForm("Employee");
		PresidentialPardonForm pardonForm("Criminal");

		highLevel.signAForm(shrubberyForm);
		highLevel.executeForm(shrubberyForm);
		highLevel.signAForm(robotomyForm);
		highLevel.executeForm(robotomyForm);
		highLevel.signAForm(pardonForm);
		highLevel.executeForm(pardonForm);

		std::cout << "\nTesting mid level bureaucrat:" << std::endl;
		midLevel.signAForm(shrubberyForm);
		midLevel.executeForm(shrubberyForm);
		midLevel.signAForm(robotomyForm);
		midLevel.executeForm(robotomyForm);
		midLevel.signAForm(pardonForm);
		midLevel.executeForm(pardonForm);

		
		std::cout << "\nTesting low level bureaucrat:" << std::endl;
		lowLevel.signAForm(shrubberyForm);
		lowLevel.executeForm(shrubberyForm);
		lowLevel.signAForm(robotomyForm);
		lowLevel.executeForm(robotomyForm);
		lowLevel.signAForm(pardonForm);
		lowLevel.executeForm(pardonForm);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return 0;
}