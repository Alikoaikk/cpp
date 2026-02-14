/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 06:10:42 by akoaik            #+#    #+#             */
/*   Updated: 2026/02/10 18:51:52 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void print (HumanA& other)
{
    // use the real other not a copy of it, even if it is allocated on the cache.
}

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

}