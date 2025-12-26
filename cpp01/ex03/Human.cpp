/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 22:11:53 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/25 22:18:54 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanrA.hpp"

void HumaneA::attack()
{
    std::cout << this->name << " attack with their "
        << this->wp.getType()
        << std::endl ;
}