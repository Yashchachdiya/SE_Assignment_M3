//16. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main() 
{

    int n, sum = 0, i = 1;
    printf("\n\n\t Enter a number: ");
    scanf("%d", &n);

    while (i<=n)
	{
        sum+=i;
        i++;
    }

    printf("\n\n\t Sum of natural numbers from 1 to %d is :  %d \n", n, sum);
    
    
}

