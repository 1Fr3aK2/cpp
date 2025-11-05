/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 03:15:52 by rafael            #+#    #+#             */
/*   Updated: 2025/11/03 16:17:44 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _GradeToSign;
        const int _GradeToExec;
    public:
        AForm();
        AForm(const std::string &name, int gradetosign, int gradetoexec);
        AForm(const AForm &other);
        ~AForm();
        AForm& operator=(const AForm& other);
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
std::ostream &operator<<(std::ostream &out, const AForm &AForm);


#endif