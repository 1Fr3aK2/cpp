/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:20:24 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 18:50:20 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <limits>
#include <ctime>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
        MutantStack() : std::stack<T>()
        {
            std::cout << "MutantStack default constructor called" << std::endl;
        }
        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return (*this);
        }
        ~MutantStack()
        {
            std::cout << "MutantStack destructor called" << std::endl;
        }
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
        const iterator begin() const
        {
            return (this->c.begin());
        }
        const iterator end() const
        {
            return (this->c.end());
        }
        reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }
        reverse_iterator rend()
        {
            return (this->c.rend());
        }
        const_reverse_iterator rbegin() const
        {
            return (this->c.rbegin());
        }
        const_reverse_iterator rend() const
        {
            return (this->c.rend());
        }      
};



#endif