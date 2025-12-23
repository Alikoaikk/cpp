/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:50 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/22 23:46:27 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie 
{
    private : 
        std::string name ; 
        
    public : 
        Zombie(std::string name);
        
        void annouce(void);
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);
}