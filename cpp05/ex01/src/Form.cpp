/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:55 by rafael            #+#    #+#             */
/*   Updated: 2025/11/01 03:57:23 by rafael           ###   ########.fr       */
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

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    
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

