/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 03:45:38 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 14:15:59 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"
#include "Contacts.hpp"

phoneBook::phoneBook()
    : nextIndex(0),
      count(0)
{}

void phoneBook::addContact(const Contacts& contact)
{
    contacts[nextIndex] = contact;

    if (count < 8)
        count++;
    nextIndex++;
    if (nextIndex == 8)
        nextIndex = 0;
}

int phoneBook::getCount() const { return count; }
const Contacts& phoneBook::getContact(int index) const { return contacts[index]; }