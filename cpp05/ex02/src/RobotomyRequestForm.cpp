/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:40:31 by raamorim          #+#    #+#             */
/*   Updated: 2025/11/06 21:33:52 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    std::cout << "Default RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm",
	72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm("RobotomyRequestForm",
	72, 45), _target(other._target)
{
    
    std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    std::cout << "RobotomyRequestForm assignment operator called." << std::endl;
    if (this != &other)
        _target = other._target;
    AForm::operator=(other);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->check_execution(executor);
    std::srand(std::time(0));
    std::cout << "zzzzttt... hydraulic pressure stable... engaging drill!" << std::endl;
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << _target << " robotomization failed." << std::endl;    
}