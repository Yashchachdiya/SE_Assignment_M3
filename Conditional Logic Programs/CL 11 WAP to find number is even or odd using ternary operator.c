//11.WAP to find number is even or odd using ternary operator

#include <stdio.h>

main()
 {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("\n The number is even.") : printf("\n The number is odd.");

   
}

