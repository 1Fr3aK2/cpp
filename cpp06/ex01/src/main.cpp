/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:26:51 by raamorim          #+#    #+#             */
/*   Updated: 2025/11/12 12:51:42 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

int main()
{
    Data data;
    data.string = "rafael";
    data.n = 90;

    std::cout << "data.string: " << data.string << std::endl;
    std::cout << "data.n: " << data.n << std::endl;

    uintptr_t serialized =  Serializer::serialize(&data);
    std::cout << "Serialized uintptr_t: " << serialized << std::endl;

    Data *deserialized = Serializer::deserialize(serialized);
    std::cout << "deserialized.string: " << deserialized->string << std::endl;
    std::cout << "deserialized.n: " << deserialized->n << std::endl;
    

}
