/*.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/


#include<stdio.h>
main()

{
    int num1, num2, temp;
    printf("\n\t Enter first number: ");
    scanf("%d", &num1);
    printf("\n\t Enter second number: ");
    scanf("%d", &num2);
    printf("\n---------------------------------------------------------------------");
    printf("\n\t num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n\t Swapped numbers : num1 = %d, num2 = %d\n", num1, num2);
}

