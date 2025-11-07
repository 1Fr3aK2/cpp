/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 02:55:13 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 03:22:41 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
# include <string>

template <typename T, typename F>

void iter(T *array, size_t length, F function)
{
    for (size_t i = 0; i < length; i++)
        function(array[i]);   
}

#endif