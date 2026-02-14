/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatingPointNumber.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 17:38:05 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/17 15:30:00 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

# int and Floating point : 
___________________________ */

    int x = 10; // exact 
    int y = 10 / 3 // 3 (fraction lost)
    
    0.1f + 0.2f != 0.3f // inaccurate 
    if (0.1f == 0.1f)

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