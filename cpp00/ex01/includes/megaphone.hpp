/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:01:44 by rafael            #+#    #+#             */
/*   Updated: 2025/10/08 17:26:39 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
#define MEGAPHONE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>

#include "../includes/contact.hpp"
#include "../includes/phonebook.hpp"

bool getInput(std::string  &input);
void formatStr(std::string  &input);
bool getteline(std::string  &cmd);
#endif
