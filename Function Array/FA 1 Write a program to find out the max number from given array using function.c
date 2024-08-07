//Write a program to find out the max number from given array using function

#include<stdio.h>
main() 
{
    int n,i;
	int arr[n];

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++) 
	{
		printf("\nEnter element :");
        scanf("%d",&arr[i]);
    }
	
	int max=arr[0];
    for(i=1;i<n;i++) 
	{
        if (arr[i]>max) 
		{
            max=arr[i];
        }
    }
    printf("\n\nThe maximum number in the array is: %d", max);
}
