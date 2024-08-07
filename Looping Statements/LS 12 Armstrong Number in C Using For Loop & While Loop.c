//12. Program of Armstrong Number in C Using For Loop & While Loop



#include <stdio.h>

main()  
{
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    int len = 0;
    while (temp != 0) 
	{
        temp /= 10;
        len++;
    }

    temp = num;
    int i;
    for ( i = 0; i < len; i++) 
	{
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num) 
	{
        printf("%d is an Armstrong number\n", num);
    } else
	 {
        printf("%d is not an Armstrong number\n", num);
    }
printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) 
	{
        temp /= 10;
        len++;
    }

    temp = num;
    while (temp != 0) 
	{
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num) 
	{
        printf("%d is an Armstrong number\n", num);
    } else 
	{
        printf("%d is not an Armstrong number\n", num);
    }

   
}
