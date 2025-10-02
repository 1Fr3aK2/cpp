/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:14:09 by rafael            #+#    #+#             */
/*   Updated: 2025/10/02 18:23:34 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>


class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain &operator=(const Brain& other);
        ~Brain();
        void setIdea(int index, std::string idea);
        std::string getIdea(int index) const;
};


#endif