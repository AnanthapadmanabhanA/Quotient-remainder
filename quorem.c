//
//  quorem.c
//  
//
//  Created by Ananthu on 15/05/20.
//

#include "quorem.h"

#include <stdio.h>
int main()
{

int num1, num2, quot, rem;
    
printf("Enter dividend: ");
scanf("%d", &num1);
    
printf("Enter divisor: ");
scanf("%d", &num2);
    
quot = num1 / num2;
rem = num1 % num2;
    
printf("Quotient is: %d\n", quot);
printf("Remainder is: %d", rem);
    
 return 0;

}
