/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:59:39 by rafael            #+#    #+#             */
/*   Updated: 2025/10/01 00:01:48 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
    private:

    public:
        Cat();
        ~Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat& original);
        void makeSound() const;
};


#endif