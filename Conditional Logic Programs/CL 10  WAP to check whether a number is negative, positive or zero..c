//10.WAP to check whether a number is negative, positive or zero.

#include <stdio.h>

main() 
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    
    if (number > 0) 
	{
        printf("\n The number is positive.");
    } else if (number < 0)
	 {
        printf("\n The number is negative.");
    } else 
	{
        printf("\n The number is zero.");
    }
    
}

