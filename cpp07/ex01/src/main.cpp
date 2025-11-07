/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 03:29:58 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 04:09:00 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

template <typename T>
void plusFifty(T &n)
{
    n += 50;
    return ;
}

template <typename T>
void printarr(T *arr, size_t length)
{
    std::cout << "array: " << std::endl;
    for (size_t i = 0; i < length; i++)
        std::cout << arr[i] << ",";
    std::cout << std::endl;
}

template <typename T>
void print(T arg)
{
    std::cout << arg << std::endl;
}


int main()
{
    
    int numbers[] = {10, 20, 30, 40};
    size_t n_len = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original array:" << std::endl;
    ::printarr(numbers, n_len);

    std::cout << "After plusFifty:" << std::endl;
    ::iter(numbers, n_len, ::plusFifty<int>);
    ::printarr(numbers, n_len);

    std::cout << "iter + print:" << std::endl;
    ::iter(numbers, n_len, ::print<int>);

    std::string words[] = {"Hello", "42", "Lisboa"};
    size_t w_len = sizeof(words) / sizeof(words[0]);

    std::cout << "\nArray of strings:" << std::endl;
    ::printarr(words, w_len);

    std::cout << "iter + print:" << std::endl;
    ::iter(words, w_len, ::print<std::string>);

    return 0;
}
