/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:57:00 by rafael            #+#    #+#             */
/*   Updated: 2025/09/30 23:59:21 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
    private:

    public:
        Dog();
        ~Dog();
        Dog(const Dog& original);
        Dog& operator=(const Dog& original);
        void makeSound() const;
};

#endif