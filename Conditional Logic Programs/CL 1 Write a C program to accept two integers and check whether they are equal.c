//1. Write a C program to accept two integers and check whether they are equal or not


#include <stdio.h>

main()
 {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 == num2) 
	{
        printf("The two integers %d and %d are equal.\n", num1, num2);
    } 
	else 
	{
        printf("The two integers %d and %d are not equal.\n", num1, num2);
    }
    
}

