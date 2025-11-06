/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:40:34 by raamorim          #+#    #+#             */
/*   Updated: 2025/11/06 23:16:14 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm",
	145, 137), _target("default")
{
	std::cout << "Default ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm",
	145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm",
	145, 137), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm assignment operator called." << std::endl;
	if (this != &other)
		_target = other._target;
	AForm::operator=(other);
	return (*this);
}

const char *ShrubberyCreationForm::FileCantOpenException::what() const throw()
{
	return "Exception: Couldn't open the file.";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->check_execution(executor);
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open())
		throw FileCantOpenException();
	file << "Ascii trees" << std::endl;
	file << "       _-_       " << std::endl;
	file << "    /~~   ~~\\    " << std::endl;
	file << " /~~         ~~\\ " << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  / " << std::endl;
	file << "   ~  \\\\ //  ~   " << std::endl;
	file << " _- -  | | _- _  " << std::endl;
	file << "  _ -  | |   -_  " << std::endl;
	file << "      // \\\\      " << std::endl;
}

AForm* ShrubberyCreationForm::create(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}