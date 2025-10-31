/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:01 by rafael            #+#    #+#             */
/*   Updated: 2025/10/31 20:12:09 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

int	main(void)
{
	Bureaucrat bur("Bur", 150);
    std::cout << "bur " << bur.get_name() << " has grade: " << bur.get_grade() << std::endl;
    try
    {
        bur.incrementGrade(10);
        std::cout << bur << std::endl;
        bur.decrementGrade(100);
        std::cout << bur << std::endl;  
        Bureaucrat bura;

        bura = bur;
        bura.incrementGrade(100);
        std::cout << bura << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}