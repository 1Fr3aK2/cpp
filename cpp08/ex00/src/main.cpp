/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:42:16 by rafael            #+#    #+#             */
/*   Updated: 2025/11/12 17:03:47 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int main()
{
    int arr1[] = {20, 5, 1, 100, 852};
    int arr2[] = {200, 50, 10, 1000, 8520};

    std::vector<int> vec(arr1, arr1 + sizeof(arr1) / sizeof(int));
    std::list<int> lst(arr2, arr2 + sizeof(arr2) / sizeof(int));
    
    try
    {
        std::cout << "Found: " << easyfind(vec, 5) << std::endl;
        std::cout << "Found: " << easyfind(lst, 50) << std::endl;
        std::cout << "Found: " << easyfind(vec, 85) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}