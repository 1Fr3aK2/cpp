/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 23:41:19 by rafael            #+#    #+#             */
/*   Updated: 2026/01/12 23:46:55 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

EasyFind::EasyFind() 
{
    std::cout << "Default constructor called" << std::endl;    
}

EasyFind::EasyFind(const EasyFind &other)
{
    *this = other;
}

EasyFind &EasyFind::operator=(const EasyFind &other)
{
    std::cout << "Assignment operator called" << std::endl;
	(void)other;    
	return (*this);
}

EasyFind::~EasyFind() 
{
    std::cout << "Default destructor called" << std::endl;
}