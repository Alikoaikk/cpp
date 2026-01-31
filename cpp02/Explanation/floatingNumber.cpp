/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flotingNumber.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:41:07 by akoaik            #+#    #+#             */
/*   Updated: 2026/01/02 16:05:48 by akoaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

# Notation of a floating number : 
_________________________________

Default formatting %f %g or std::cout may 
    - show too many digits 
    - use fixed format unexpectededly 


# HOW TO USE : 
______________

[%f] fixed decimal notation
[%e] scientific notation 

*/

// # Example : 
#include <stdio.h>
#include <iostream>

int main ()
{
    float number ;
    float miniNumber ;
    float integer ;

    number = 90.34326374227855 ;
    miniNumber = 0.00000000000003 ;
    integer = 16777227.0f ; /* in this case the odd number after 216 is skipped 
                                try 220 221 and see the diffrence */
    
    printf("printf: %f \nprintf with %%e %e \n", number, number);
    std::cout << "cout: " <<number<<std::endl ;

    std::cout << std::endl ;

    printf("printf: %f \nprintf with %%e %e \n", miniNumber, miniNumber);
    std::cout << "cout: " <<miniNumber<<std::endl ;

    std::cout << std::endl ;

    printf("printf: %f \nprintf with %%e %e \n", integer, integer);
    std::cout << "cout: " <<integer<<std::endl ;
    
}

/*

#key difference between double and float :  

Feature     |	float               |   double
____________|_______________________|________________________
Size	    |   32 bits (4 bytes)	|	64 bits (8 bytes)
Precision	|	~7 decimal digits	|	~15-17 decimal digits
Max Value	|	~3.4e38				|	~1.8e308
____________|_______________________|_________________________
default type|	: if the number just number.number it will be double
					example : 3.14 , 1.5 , 0.1578
				: if the number end with the letter f it will be float
					example : 3.14f , 0.123f 



*/