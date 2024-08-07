//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

main() 
{
    int n, sum = 0, i = 1;


    printf("Enter NUMBER: ");
    scanf("%d", &n);

    while (i <= n)
	 {
        if (i == 1)
		 {
            printf("(%d*%d)", i, i);
        } 
		else 
		{
            printf(" + (%d*%d)", i, i);
        }
        sum += i * i;
        i++;
    }

    printf(" = %d\n", sum);
    
 
}

