/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:12:16 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 18:16:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>


Span::Span() : _N(0)
{
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _N(n)
{
    std::cout << "Span constructor called" << std::endl;
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _N = other._N;
        _vector = other._vector;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (_vector.size() < _N)
        _vector.insert(std::lower_bound(_vector.begin(), _vector.end(), n), n);
    else
        throw std::runtime_error("FULL");
}

int Span::shortestSpan()
{
    int min;
    int span;

    if (_vector.size() < 2)
        throw std::runtime_error("Impossible to calculate the span");
    
    min = std::numeric_limits<int>::max();
    for (size_t i = 1; i < _vector.size(); i++)
    {
        span = _vector[i] - _vector[i - 1];
        if (span < min)
            min = span;
    }
    return min;
}

int Span::longestSpan()
{
    if (_vector.size() < 2)
        throw std::runtime_error("Impossible to calculate the Span");
    return (_vector.back() - _vector.front());
}

void Span::fillvector()
{
    std::srand(std::time(0));
    while (_vector.size() < _N)
    {
        addNumber(std::rand());
    }
}