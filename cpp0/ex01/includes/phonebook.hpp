/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:23:27 by rafael            #+#    #+#             */
/*   Updated: 2025/08/31 10:54:00 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "../includes/contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int _ctd;
    public:
        PhoneBook();
        ~PhoneBook();
        void Add(void);
        void Search(void);
};

Contact GetInfo(void);

#endif
