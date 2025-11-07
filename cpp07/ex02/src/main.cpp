/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 04:12:40 by rafael            #+#    #+#             */
/*   Updated: 2025/11/07 05:04:19 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>

int main(void)
{
	try
	{
		std::cout << "==== Teste de construtores ====" << std::endl;
		Array<int> a(5);

		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = i * 10;

		std::cout << "Array a: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "\n==== Teste de construtor de cópia ====" << std::endl;
		Array<int> b(a); // copy constructor
		std::cout << "Array b (cópia de a): ";
		for (unsigned int i = 0; i < b.size(); i++)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "\n==== Teste de atribuição ====" << std::endl;
		Array<int> c;
		c = a; // operator=
		std::cout << "Array c (após c = a): ";
		for (unsigned int i = 0; i < c.size(); i++)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "\n==== Teste de modificação ====" << std::endl;
		b[0] = 999;
		std::cout << "b[0] modificado -> b[0] = " << b[0] << std::endl;
		std::cout << "a[0] continua = " << a[0] << " (deep copy funciona)" << std::endl;

		std::cout << "\n==== Teste com strings ====" << std::endl;
		Array<std::string> s(3);
		s[0] = "Olá";
		s[1] = "mundo";
		s[2] = "42";

		for (unsigned int i = 0; i < s.size(); i++)
			std::cout << s[i] << " ";
		std::cout << std::endl;

		std::cout << "\n==== Teste de exceção ====" << std::endl;
		std::cout << a[a.size()] << std::endl; // fora dos limites — deve lançar
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exceção apanhada: " << e.what() << std::endl;
	}

	return 0;
}
