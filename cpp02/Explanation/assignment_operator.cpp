/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment_operator.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:01:38 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/15 16:07:28 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

this    : key word of the current class, it's a pointer
*this   : is the derefresing of pointer, so it is the class it slef

this->operator=(class) is the same as this = class  ;
    so it is still calls the assignemnt operator function





*/

class person 
{
    public : 
        char    *name ;
        int     age ;

    person (person& p1)
    {
        this->operator=(p1);
        // or 
        *this = p1 ;
    }

    person operator=(person& other)
    {
        if (this != &other)
        {
                        
        }
            
    }
}