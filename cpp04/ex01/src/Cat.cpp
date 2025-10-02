/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:11:42 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 19:08:10 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->_type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = other._type;
    this->brain = new Brain(*other.brain);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this == &other)
        return (*this);
    delete this->brain;
    this->brain = new Brain(*other.brain);
    this->Animal::operator=(other);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (brain);
}