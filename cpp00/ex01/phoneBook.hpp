/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:15:13 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 14:21:43 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef phoneBook_HPP
#define phoneBook_HPP

#include "Contacts.hpp"

class phoneBook {
    private:
        Contacts contacts[8];
        int nextIndex;
        int count;

    public:
        phoneBook();
        
        void addContact(const Contacts& contact);

        int getCount() const ;
        const Contacts& getContact(int index) const ;      
};

#endif
