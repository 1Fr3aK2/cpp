/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:22:11 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 17:01:46 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

template <typename T>
int easyfind(T container, int nb)
{

    typename T::iterator it = std::find(container.begin(), container.end(), nb);
    if (it == container.end())
        throw std::runtime_error("Value not found");
    return *it; 
}

#endif