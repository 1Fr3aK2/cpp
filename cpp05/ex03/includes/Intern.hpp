/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 22:01:46 by rafael            #+#    #+#             */
/*   Updated: 2025/11/06 23:18:11 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <AForm.hpp>

class Intern
{
    private:
        static AForm*(*Constructors[3])(const std::string &target);
        static std::string Names[3];
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern &operator=(const Intern &other);
        AForm *makeform(std::string name, std::string target);

        class FormNotFoundException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif