/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include <stdio.h>
main()
{
    int number, evenCount=0, oddCount = 0, i=1;
    while (i<=5) 
	{
    
        printf("\n\t Enter number %d : ", i);
        scanf("%d", &number);

        
        if (number%2==0)
            evenCount++;
        else
            oddCount++;

        i++;
    }
    printf("\n\n\t  Number of even numbers : %d  \n", evenCount);
    printf("\n\n\t  Number of odd numbers:  %d \n", oddCount);
}

