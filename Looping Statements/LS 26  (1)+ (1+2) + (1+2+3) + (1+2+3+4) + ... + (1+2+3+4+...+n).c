//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main()
 {
    int n, totalSum = 0, i = 1, j;

  
    printf("Enter a number: ");
    scanf("%d", &n);

  
    while (i <= n) {
        int innerSum = 0;

        
        printf("(");
        for (j = 1; j <= i; j++) 
		{
            innerSum += j;
            if (j == 1) 
			{
                printf("%d", j);
            } else 
			{
                printf("+%d", j);
            }
        }
        printf(")");

        totalSum += innerSum;

     
        if (i < n) 
		{
            printf(" + ");
        }

        i++;
    }

  
    printf(" = %d\n", totalSum);

    return 0;
}

