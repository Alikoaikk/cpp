/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanrA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:29:58 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 22:16:45 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumaneA
{
    private : 
        std::string name ; 
        Weapon wp ;

    public : 
        HumaneA();

        void attack();
        
};