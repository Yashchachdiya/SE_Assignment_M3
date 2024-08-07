//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
 main()
 {
    int n, i = 1;


    printf("Enter a positive integer: ");
    scanf("%d", &n);


    while (i <= n)
	{
        if (i == 1) 
		{
            printf("%d", i);
        } 
		else 
		{
            printf(" + %d", i);
        }
        i++;
    }
    printf("\n");

}

