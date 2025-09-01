/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:15:53 by rafael            #+#    #+#             */
/*   Updated: 2025/08/31 10:34:52 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "../includes/megaphone.hpp"

class Contact
{
    private:
        t_string _first_name;
        t_string _last_name;
        t_string _nickname;
        t_string _phone_number;
        t_string _darkest_secret;

    public:
        Contact();
        ~Contact();

        bool SetFirstName(t_string name);
        bool SetLastName(t_string name);
        bool SetNickname(t_string name);
        bool SetPhoneNumber(t_string name);
        bool SetDarkestSecret(t_string name);

        t_string GetFirstName(void);
        t_string GetLastName(void);
        t_string GetNickname(void);
        t_string GetPhoneNumber(void);
        t_string GetDarkestSecret(void);

        void PrintContact(void);
};

#endif

