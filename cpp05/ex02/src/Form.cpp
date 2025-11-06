/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:55 by rafael            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:20 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : _name("default"), _signed(false), _GradeToSign(150), _GradeToExec(150)
{
    std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, int gradetosign, int gradetoexec) : _name(name), _signed(false), _GradeToSign(gradetosign), _GradeToExec(gradetoexec)
{
    std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{   
    std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "AForm Assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return (*this);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.get_grade() > _GradeToSign)
        throw AForm::GradeTooLowException();
    if (_signed)
        throw AForm::FormAlreadySignedException();
    _signed = true;
    std::cout << bureaucrat.get_Name() << " signed " << _name << std::endl;
}

std::string AForm::get_Name() const
{
    return (_name);
}

bool AForm::is_Signed() const
{
    return (_signed);
}

int AForm::get_GradeToSign() const
{
    return (_GradeToSign);
}

int AForm::get_GradeToExec() const
{
    return (_GradeToExec);
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is to high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return ("Exception: Grade is to low");
}

const char * AForm::FormNotSignedException::what() const throw()
{
    return ("Exception: Form not signed");
}

const char * AForm::FormAlreadySignedException::what() const throw() 
{
    return ("Exception: Form already signed");
}

void AForm::check_execution(Bureaucrat const & executor) const
{
    if (_signed == false)
        throw AForm::FormNotSignedException();
    if (executor.get_grade() > _GradeToExec)
        throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
    out << AForm.get_Name() << ", AForm grade to sign: " << AForm.get_GradeToSign() << ", AForm grade to exec: " << AForm.get_GradeToExec() << ", Signed: " << AForm.is_Signed();
	return (out);
}