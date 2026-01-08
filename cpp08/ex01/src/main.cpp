/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:08:05 by rafael            #+#    #+#             */
/*   Updated: 2026/01/07 16:12:59 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main()
{
    try
    {
        std::cout << "===== TESTE 1: Adding numbers w/addNumber =====" << std::endl;
        Span sp(5); 

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span:  " << sp.longestSpan() << std::endl;

        std::cout << "\n===== TESTE 2: Try to add more than the limit =====" << std::endl;
        try
        {
            sp.addNumber(42);
        }
        catch (const std::exception &e)
        {
            std::cerr << "Erro: " << e.what() << std::endl;
        }

        std::cout << "\n===== TESTE 3: Span w/short number of elements =====" << std::endl;
        Span sp2(2);
        sp2.addNumber(5);
        try
        {
            std::cout << sp2.shortestSpan() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << "Erro: " << e.what() << std::endl;
        }

        std::cout << "\n===== TESTE 4: automatic fill with random number (0 - 99) =====" << std::endl;
        Span sp3(10);
        for (int i = 0; i < 10; i++)
            sp3.addNumber(rand() % 100);

        std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
        std::cout << "Longest Span:  " << sp3.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Erro fatal: " << e.what() << std::endl;
    }

    return 0;
}