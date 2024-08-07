//. Accept 2 numbers and find out its sum check it size

#include <stdio.h>


main()
 {
    int num1, num2;
    int  sum;  

    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = (int)num1 + num2;

    printf("\nSum of %d and %d is %lld.", num1, num2, sum);
    printf("\nSize of various data types:");
    printf("\nSize of int: %lu bytes", sizeof(int));
    printf("\nSize of long long: %lu bytes", sizeof(long long));
    printf("\nSize of float: %lu bytes", sizeof(float));
    printf("\nSize of double: %lu bytes", sizeof(double));
    printf("\nSize of char: %lu byte", sizeof(char));
  

}

