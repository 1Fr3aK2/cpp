/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:55 by rafael            #+#    #+#             */
/*   Updated: 2025/11/03 02:41:25 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : _name("default"), _signed(false), _GradeToExec(150), _GradeToSign(150)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int gradetosign, int gradetoexec) : _name(name), _signed(false), _GradeToSign(gradetosign), _GradeToExec(gradetoexec)
{
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _GradeToExec(other._GradeToExec), _GradeToSign(other._GradeToSign)
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
    if(bureaucrat.get_grade() > _GradeToSign)
        throw Form::GradeTooHighException();
    _signed = true;
    std::cout << bureaucrat.getName() << " signed " << _name << std::endl;
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

