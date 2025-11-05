/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:01 by rafael            #+#    #+#             */
/*   Updated: 2025/11/05 18:37:47 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

int main() {
	try {
        Bureaucrat b("rafael", 2);
        std::cout << b << std::endl;

        AForm f("AForm1", 1, 1);
        std::cout << f << std::endl;

        b.signAForm(f);
        std::cout << f << std::endl;
        std::cout << std::endl << "---------------------" << std::endl << std::endl;

        Bureaucrat b2("Joao", 5);
        std::cout << b2 << std::endl;

        b2.signAForm(f);
        std::cout << f << std::endl;

        std::cout << std::endl << "---------------------" << std::endl << std::endl;
        Bureaucrat b3("duarte", 1);
        std::cout << b3 << std::endl;

        AForm f2("AForm2", 2, 2);
        std::cout << f2 << std::endl;

        b3.signAForm(f2);
        std::cout << f2 << std::endl;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
	return 0;
}