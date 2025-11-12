/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:05:49 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 18:16:35 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <limits>
#include <ctime>
    
class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vector;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        void addNumber(int n);
        int shortestSpan(); 
        int longestSpan();
        void fillvector();
};


#endif