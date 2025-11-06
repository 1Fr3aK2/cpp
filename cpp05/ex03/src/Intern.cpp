/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 22:01:55 by rafael            #+#    #+#             */
/*   Updated: 2025/11/06 23:21:46 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

std::string Intern::Names[3] =
{
    "shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

AForm* (*Intern::Constructors[3])(const std::string &target) =
{
    &ShrubberyCreationForm::create,
    &RobotomyRequestForm::create,
    &PresidentialPardonForm::create
};

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
    (void)other;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    std::cout << "Intern assignment operator called" << std::endl;
    return (*this);
}


const char* Intern::FormNotFoundException::what() const throw()
{
    return "Form not found";
}

AForm* Intern::makeform(std::string name, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (name == Names[i])
        {
            std :: cout << "Intern created " << name << std :: endl;
			return Constructors[i](target);
        }
    }
    throw Intern::FormNotFoundException();
}