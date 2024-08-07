//15.Calculate sum of 10 numbers using of while loop
#include <stdio.h>
main()
{
    int sum = 0,  count = 0, number;

    printf("\n\t Enter 10 numbers : \n");

  
    while (count<10)
	{
        printf("\n\t Number ( %d ) : ", count + 1);
        scanf("%d", &number);
        sum+=number;
        count++;
    }

    
    printf("\n\n\t Sum of the 10 numbers : ( %d )", sum);
}

