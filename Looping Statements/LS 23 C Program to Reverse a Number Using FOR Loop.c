//23. C Program to Reverse a Number Using FOR Loop

#include <stdio.h>

 main() 
{
    int num, r = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    for (; num != 0; num /= 10)
	 {
        remainder = num % 10;         
        r = r * 10 + remainder; 
    }

   
    printf("Reversed Number: %d\n", r);

    
}

