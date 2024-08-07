//16.Accept 5 numbers from user and perform sum of array
#include <stdio.h>

main()
 {
    int numbers[5];
    int i, sum = 0;

    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Array %d : ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    for (i = 0; i < 5; i++) 
	{
        sum += numbers[i];
    }

    
    printf("\nSum of the Array: %d\n", sum);

    return 0;
}

