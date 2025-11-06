/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:01 by rafael            #+#    #+#             */
/*   Updated: 2025/11/06 23:23:01 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <Intern.hpp>

int main() {
	try
	{
		Intern someRandomIntern;

		
		AForm* shrubberyForm = someRandomIntern.makeform("shrubbery creation", "Garden");
		AForm* robotomyForm = someRandomIntern.makeform("robotomy request", "Robot");
		AForm* pardonForm = someRandomIntern.makeform("presidential pardon", "Alice");

		
		std::cout << "Shrubbery Form: " << shrubberyForm->get_Name() << std::endl;
		std::cout << "Robotomy Form: " << robotomyForm->get_Name() << std::endl;
		std::cout << "Pardon Form: " << pardonForm->get_Name() << std::endl;

		
		Bureaucrat bob("Rafael", 1);

		
		shrubberyForm->beSigned(bob);
		shrubberyForm->execute(bob);

		robotomyForm->beSigned(bob);
		robotomyForm->execute(bob);

		pardonForm->beSigned(bob);
		pardonForm->execute(bob);

		delete shrubberyForm;
		delete robotomyForm;
		delete pardonForm;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return 0;
}