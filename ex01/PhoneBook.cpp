/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 03:45:38 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/20 06:04:29 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
    : nextIndex(0),
      count(0)
{}

void PhoneBook::addContact(const Contacts& contact)
{
    contacts[nextIndex] = contact;

    if (count < 8)
        count++;
    nextIndex++;
    if (nextIndex == 8)
        nextIndex = 0;
}
