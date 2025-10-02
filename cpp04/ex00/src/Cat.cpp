/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:11:42 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 02:47:44 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this == &other)
        return (*this);
    this->Animal::operator=(other);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}
