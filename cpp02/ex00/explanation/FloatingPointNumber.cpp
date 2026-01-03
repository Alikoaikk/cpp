/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatingPointNumber.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:38:05 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/03 02:25:29 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

# int and Floating point : 
___________________________ */

    int x = 10; // exact 
    int y = 10 / 3 // 3 (fraction lost)
    
    0.1f + 0.2f != 0.3f // inaccurate 

/*
# So 
_____

    Integers    --> accurate but inflexible
    Float       --> flexible but inaccurate
    
    This is a gap fixed-point numbers fill 


# What is a fixed point number 
_______________________________

is stored as an integer but interpreted as having implicit decimal 
point at fixed position 

Example : 
    1.23 stored integer 123
    5.00 stored integer 500 
*/

/*

*/