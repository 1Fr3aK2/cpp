    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   contact.cpp                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2025/08/31 01:21:54 by rafael            #+#    #+#             */
    /*   Updated: 2025/08/31 02:22:57 by rafael           ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    #include "../includes/megaphone.hpp"

    Contact::Contact()
    {
    }

    Contact::~Contact()
    {
    }

    bool Contact::SetFirstName(t_string name)
    {
        if (name == "")
            return (false);
        _first_name = name;
        return (true);
    }

    bool Contact::SetLastName(t_string name)
    {
        if (name == "")
            return (false);
        _last_name = name;
        return (true);
    }

    bool Contact::SetNickname(t_string name)
    {
        if (name == "")
            return (false);
        _nickname = name;
        return (true);
    }

    bool Contact::SetDarkestSecret(t_string name)
    {
        if (name == "")
            return (false);
        _darkest_secret = name;
        return (true);
    }

    bool Contact::SetPhoneNumber(t_string name)
    {
        if (name == "")
            return (false);
        _phone_number = name;
        return (true);
    }

    t_string Contact::GetFirstName(void)
    {
        return (_first_name);
    }

    t_string Contact::GetLastName(void)
    {
        return (_last_name);
    }

    t_string Contact::GetNickname(void)
    {
        return (_nickname);  
    }

    t_string Contact::GetPhoneNumber(void)
    {
        return (_phone_number);
    }

    t_string Contact::GetDarkestSecret(void)
    {
        return (_darkest_secret);
    }

    void Contact::PrintContact(void)
    {
        std::cout << "First Name: " << _first_name << std::endl;
        std::cout << "Last Name: " << _last_name << std::endl;
        std::cout << "Nickname : " << _nickname << std::endl;
        std::cout << "Phone Number : " << _phone_number << std::endl;
        std::cout << "Darkest Secret : " << _darkest_secret << std::endl;
    }