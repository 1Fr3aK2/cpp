/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:11:57 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 19:08:47 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
    std::cout << "Default Dog constructor called" << std::endl;
    this->_type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = other._type;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog& other)
{
    if (this == &other)
        return (*this);
    delete this->brain;
    this->brain = new Brain(*other.brain);
    this->Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (brain);
}