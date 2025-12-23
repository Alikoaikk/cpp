/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:46 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 23:47:44 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name ;
}

void Zombie::annouce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl ; 
}

Zombie *Zombie::newZombie(std::string name)
{
    return (new Zombie(name));
}

void Zombie::randomChump(std::string name)
{
    Zombie z("temp Zombie");
    z.annouce();
}
