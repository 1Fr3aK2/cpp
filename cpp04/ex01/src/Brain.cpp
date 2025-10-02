/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:20:24 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 18:13:40 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    *this = other;
}

Brain &Brain::operator=(const Brain& other)
{
    if (this == &other)
        return(*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    if (index < 0 || index >=100)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100 || ideas[index].empty())
        return ("");
    return (ideas[index]);
}