/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 02:29:24 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 02:45:19 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>

T min(T &a, T &b)
{
    return (a < b ? a : b);
}
template <typename T>

T max(T &a, T &b)
{
    return (a > b ? a : b);
}
#endif