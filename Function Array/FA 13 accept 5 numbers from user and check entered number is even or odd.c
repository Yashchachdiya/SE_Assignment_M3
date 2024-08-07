/*13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array*/

#include<stdio.h>
main()
{
	int size, arr[50], i, e_count=0, o_count=0;
	
	printf("\n\n\t Enter the size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Enter arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n\n\t Even Numbers -----------");
	for(i=0;i<size;i++) //Even
	{
		if(arr[i]%2==0)
		{
				printf("\n\n\t arr[%d] : %d",i,arr[i]);
				e_count++;
		}
		
	}
	printf("\n\n\t Total Even Elements are : %d",e_count);
	
	
	
	printf("\n\n\n\t Odd Numbers -----------");
	for(i=0;i<size;i++) //Odd
	{
		if(arr[i]%2!=0)
		{
				printf("\n\n\t arr[%d] : %d",i,arr[i]);
				o_count++;
		}	
	}	
	printf("\n\n\t Total Odd Elements are : %d",o_count);
}
