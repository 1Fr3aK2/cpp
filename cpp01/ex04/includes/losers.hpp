/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   losers.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:15:00 by rafael            #+#    #+#             */
/*   Updated: 2025/09/03 19:17:22 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSERS_HPP
#define LOSERS_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
# include <fstream>
# include <sstream>

bool processInput(std::ifstream &infile, std::ofstream &outfile, std::string filename, std::ostringstream &out);
void replaceAll(std::string &content, std::string s1, std::string s2);
void processOutput(std::ofstream &outfile, std::ostringstream &out, std::string s1, std::string s2);

#endif