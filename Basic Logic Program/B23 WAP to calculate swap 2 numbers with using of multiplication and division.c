//WAP to calculate swap 2 numbers with using of multiplication and division.


#include<stdio.h>
main()

{
    float num1, num2;
    printf("\n\t Enter first number: ");
    scanf("%f", &num1);
    printf("\n\t Enter second number: ");
    scanf("%f", &num2);
    printf("\n-------------------------------------------------------------------------------\n");
    printf("\n\t Original numbers: num1 = %.2f, num2 = %.2f\n", num1, num2);
    printf("\n-------------------------------------------------------------------------------\n");
    num1 = num1 * num2; 
    num2 = num1 / num2;
    num1 = num1 / num2; 
    printf("\n\t Swapped numbers : num1 = %.2f, num2 = %.2f\n", num1, num2);
}

