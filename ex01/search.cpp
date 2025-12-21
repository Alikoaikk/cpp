/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 20:06:04 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/21 21:20:53 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <Contacts.hpp>
#include <phoneBook.hpp>

void search(const phoneBook& pb)
{
    if (pb.getCount() == 0)
    {
        
        std::cout << "The phoneBook is empty" << std::endl ;
        return ;
    }
    
    std::cout << std::setw(10) << "index" << "|" 
              << std::setw(10) << "first name" << "|"
              << std::setw(10) << "last name" << "|"
              << std::setw(10) << "nick name" << std::endl ;

    for (int i ; i < pb.getCount() ; i++ )
    {
        
    }

}