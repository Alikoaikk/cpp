/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:15:13 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/20 06:04:44 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"

class PhoneBook {
    private:
        Contacts contacts[8];
        int nextIndex;
        int count;

    public:
        PhoneBook();
        void addContact(const Contacts& contact);
};

#endif
