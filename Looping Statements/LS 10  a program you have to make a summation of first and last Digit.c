//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)


#include <stdio.h>
main()
{
    int number=1234, first_digit, last_digit, temp, sum;
   
    last_digit=number%10;

    temp=number;
    for (temp>=10; temp/=10;)

    first_digit=temp;

    sum=first_digit+last_digit;

    
    sum= +sum;

    printf("\n\t  Original number :  %d \n", number);

    
    printf("\n\n\t sum of the first and last digit : %d ", sum);
}


