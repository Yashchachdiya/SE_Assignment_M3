//15.Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

 main()
 {
    int numbers[5];
    int i, j, temp;

    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 5; i++)
	 {
        for (j = i + 1; j < 5; j++)
		 {
            if (numbers[i] > numbers[j]) 
			{
                
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }


    printf("\n ascending order:");
    for (i = 0; i < 5; i++)
	 {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    
}

