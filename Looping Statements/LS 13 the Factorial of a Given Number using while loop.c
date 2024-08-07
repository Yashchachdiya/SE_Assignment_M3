//13.calculate the Factorial of a Given Number using while loop
#include <stdio.h>
main()
{
    int  number, factorial = 1, originalNumber, continueCalculation=1;

    printf("\n\t Enter a number  : ");
    scanf("%d", &number);

    
    originalNumber=number;

    
    while (number>0)
	{
        factorial*=number;
        number--;
    }

    printf("\n\n\tFactorial of %d is : %d", originalNumber, factorial);
	
	
}
