/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:35:24 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 02:47:44 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void makeSound() const;
        std::string getType() const;
};



#endif