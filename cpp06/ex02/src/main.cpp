/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:00:48 by raamorim          #+#    #+#             */
/*   Updated: 2025/12/12 15:42:20 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base * generate(void)
{
    std::srand(std::time(0));
    int i = std::rand() % 3;
    switch (i)
    {
        case (0):
            return new A;
            break;
        case (1):
            return new B;
            break;
        case (2):
            return new C;
            break;
        default:
            return NULL;                   
    }
}

void identify(Base* p)
{
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
            std::cout << "C" << std::endl;   
        else
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Type not found" << std::endl;
    }
}

void identify(Base& p)
{
    Base test;
    
    try
    {
        test = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
    try
    {
        test = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
    try
    {
        test = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e){}
}


int main()
{
    Base *b;
    b = generate();
    identify(b);
    identify(*b);
    delete b;
}