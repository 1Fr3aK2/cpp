/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:54:59 by rafael            #+#    #+#             */
/*   Updated: 2025/09/01 18:15:26 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/megaphone.hpp"

PhoneBook::PhoneBook()
{
    _ctd = 0;
}

PhoneBook::~PhoneBook() 
{
}

Contact GetInfo(void)
{
    Contact contact;
    t_string input;

    do
    {
        std::cout << "Enter First Name: ";
        getInput(input);
    }
    while (!contact.SetFirstName(input));
    do
    {
        std::cout << "Enter Last Name: ";
        getInput(input);
    }
    while (!contact.SetLastName(input));
    do
    {
        std::cout << "Enter Nickname: ";
        getInput(input);
    }
    while (!contact.SetNickname(input));
    do
    {
        std::cout << "Enter Phone Number: ";
        getInput(input);
    }
    while (!contact.SetPhoneNumber(input));
    do
    {
        std::cout << "Enter your Darkest Secret: ";
        getInput(input);
    }
    while (!contact.SetDarkestSecret(input));
    return contact;
}

void PhoneBook::Add()
{
    Contact contact = GetInfo();
    _contacts[_ctd % 8] = contact;
    _ctd++;
}

void PhoneBook::Search()
{
    t_string temp;
    
    if (_ctd == 0)
    {
        std::cout << "No contacts available" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name"  << "|"
              << std::setw(10) << "Nickname"   << std::endl;

	for (int ctd = 0; ctd < _ctd && ctd < 8; ctd++) {
		std::cout << std::setw(10) << ctd << "|";
		temp = _contacts[ctd].GetFirstName();
		temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
		std::cout << std::setw(10) << temp << "|";
		temp = _contacts[ctd].GetLastName();
		temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
		std::cout << std::setw(10) << temp << "|";
		temp = _contacts[ctd].GetNickname();
		temp = temp.length() > 10 ? temp.substr(0, 9) + "." : temp;
		std::cout << std::setw(10) << temp << std::endl;
	}
	while (1)
	{
		std::cout << "Enter index of contact: ";
		getteline(temp);
		if (temp.length() != 1 || temp[0] < '0' || temp[0] > '7' || temp[0] - '0' >= _ctd)
			std::cout << "Invalid index" << std::endl;
		else
			break;
	}
	_contacts[temp[0] - '0'].PrintContact();
}
