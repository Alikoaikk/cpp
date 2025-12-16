/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 19:41:00 by akoaik            #+#    #+#             */
/*   Updated: 2025/12/16 19:56:26 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class person {
   
    // data fields 
    private : int age ;

    // constructor
    public : person (int age)
    {
        this->age = age ;
    } 
} ;

int main ()
{
    person *p1 = new person(12) ;
    person p2(12);
}