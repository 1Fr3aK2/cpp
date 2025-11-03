/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:52 by rafael            #+#    #+#             */
/*   Updated: 2025/11/03 00:57:19 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _GradeToSign;
        const int _GradeToExec;
    public:
        Form();
        Form(const std::string &name, int gradetosign, int gradetoexec);
        Form(const Form &other);
        ~Form();
        Form& operator=(const Form& other);
        void beSigned(const Bureaucrat &bureaucrat);
        std::string get_Name() const;
        bool is_Signed() const;
        int get_GradeToSign() const;
        int get_GradeToExec() const;

        class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
};
std::ostream &operator<<(std::ostream &out, const Form &form);


#endif