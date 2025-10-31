/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:21:33 by raamorim          #+#    #+#             */
/*   Updated: 2025/10/31 19:48:28 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name("name"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade < 150)
        throw Bureaucrat::GradeTooHighException();
    _grade = grade;
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
    if (other._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (other._grade > 150)
        throw Bureaucrat::GradeTooHighException();
    _grade = other._grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Bureaucrat Assignment operator called" << std::endl;
    if (this != &other)
    {
        if (other._grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (other._grade > 150)
            throw Bureaucrat::GradeTooHighException();
        this->_grade = other._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
}

int Bureaucrat::get_grade() const
{
    return (_grade);
}

std::string Bureaucrat::get_name() const
{
    return (_name);
}

void Bureaucrat::incrementGrade(int amount)
{
    if (_grade - amount < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade -= amount;
}

void Bureaucrat::decrementGrade(int amount)
{
    if (_grade + amount > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade += amount;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is to high\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Exception: Grade is to low\n");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade();
	return (out);
}