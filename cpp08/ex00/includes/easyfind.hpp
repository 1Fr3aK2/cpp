/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:22:11 by rafael            #+#    #+#             */
/*   Updated: 2026/01/12 23:40:07 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

class EasyFind
{
    public:
        EasyFind();
        EasyFind(const EasyFind &copy);
        EasyFind &operator=(const EasyFind &src);
        ~EasyFind();
};

template <typename T>
int easyfind(T container, int nb)
{

    typename T::iterator it = std::find(container.begin(), container.end(), nb);
    if (it == container.end())
        throw std::runtime_error("Value not found");
    return *it; 
}

#endif