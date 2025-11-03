/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:55 by rafael            #+#    #+#             */
/*   Updated: 2025/11/03 16:20:20 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : _name("default"), _signed(false), _GradeToSign(150), _GradeToExec(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradetosign, int gradetoexec) : _name(name), _signed(false), _GradeToSign(gradetosign), _GradeToExec(gradetoexec)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{   
    std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form Assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return (*this);
}
void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.get_grade() > _GradeToSign)
        throw Form::GradeTooHighException();
    _signed = true;
    std::cout << bureaucrat.get_Name() << " signed " << _name << std::endl;
}

std::string Form::get_Name() const
{
    return (_name);
}

bool Form::is_Signed() const
{
    return (_signed);
}

int Form::get_GradeToSign() const
{
    return (_GradeToSign);
}

int Form::get_GradeToExec() const
{
    return (_GradeToExec);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Exception: Grade is to high\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Exception: Grade is to low\n");
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
    out << Form.get_Name() << ", Form grade to sign: " << Form.get_GradeToSign() << ", Form grade to exec: " << Form.get_GradeToExec() << ", Signed: " << Form.is_Signed();
	return (out);
}