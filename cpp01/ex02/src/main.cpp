/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:56:08 by rafael            #+#    #+#             */
/*   Updated: 2025/10/10 15:27:52 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *ptr =  &name;
    std::string &ref = name;

    std::cout << "Adresses:" << std::endl;
    std::cout << &name << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;

    std::cout << "Values:" << std::endl;
    std::cout << name << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

}