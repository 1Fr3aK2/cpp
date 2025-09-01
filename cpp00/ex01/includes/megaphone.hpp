/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:01:44 by rafael            #+#    #+#             */
/*   Updated: 2025/08/31 11:13:55 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
#define MEGAPHONE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>

typedef std::string t_string;

#include "../includes/contact.hpp"
#include "../includes/phonebook.hpp"

void getInput(t_string &input);
void formatStr(t_string &input);
void getteline(t_string &cmd);
#endif
