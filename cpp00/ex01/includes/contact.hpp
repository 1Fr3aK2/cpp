/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <raamorim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:15:53 by rafael            #+#    #+#             */
/*   Updated: 2025/10/08 17:15:51 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "../includes/megaphone.hpp"

class Contact
{
    private:
        std::string  _first_name;
        std::string  _last_name;
        std::string  _nickname;
        std::string  _phone_number;
        std::string  _darkest_secret;

    public:
        Contact();
        ~Contact();

        bool SetFirstName(std::string  name);
        bool SetLastName(std::string  name);
        bool SetNickname(std::string  name);
        bool SetPhoneNumber(std::string  name);
        bool SetDarkestSecret(std::string  name);

        std::string  GetFirstName(void);
        std::string  GetLastName(void);
        std::string  GetNickname(void);
        std::string  GetPhoneNumber(void);
        std::string  GetDarkestSecret(void);

        void PrintContact(void);
};

#endif

