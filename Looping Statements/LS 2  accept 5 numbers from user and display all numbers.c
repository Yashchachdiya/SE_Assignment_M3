//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
    int numbers[5],  i;

    


    printf("\n\t Enter 5 numbers : \n");

    
    for (i=1;i<6;++i)
	{
        printf("\n\t Enter number [%d] : ", i );
        scanf("%d", &numbers[i]);
    }


    printf("\n\t Numbers entered : ");
    printf("\n-------------------------------------------");

    for (i=1;i<6;++i) 
	{
        printf("\n\t %d : (%d)",i, numbers[i]);
    }
    printf("\n");

   
}
