/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:27:11 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 19:34:52 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon 
{
    private : 
        std::string type ;
        
    public :
                    Weapon();
        
        std::string getType();
        void        setType(std::string typeName);
        
};