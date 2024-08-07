//14.Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>


factorial(int num) 
{
    int result=1;
    while (num>0)
	{
        result*=num;
        num--;
    }
    return result;
}

main() 
{
    int numbers[5], i;

    
    printf("\n\t Enter 5 numbers : \n");
    for (i=0;i<5;i++)
	{
        printf("\n\t Number ( %d ) : ", i+1);
        scanf("%d", &numbers[i]);
    }

    for (i=0;i<5;i++) 
	{
        int fact=factorial(numbers[i]);
        printf("\n\n\t Factorial of %d is: %d ", numbers[i], fact);
    }
}

