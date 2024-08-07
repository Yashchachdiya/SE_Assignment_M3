/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
#include<stdio.h>
main()
{
	int i, j, arr[50], size, temp,n;
	
	printf("\n\n\t Enter Size of the Array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n\n\t Enter arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n\n\t Before Sorting --------------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t arr[%d] : %d",i, arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n\n\n\t ascending order --------------");
	for(i=0;i<size;i++)
	{
		printf("\n\n\t arr[%d] : %d",i, arr[i]);
	}
	
	for (i = 0; i <size- 1; i++) {
        for (j = i + 1; j <size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n\n\n\t descending order ------------------");
    for (i = 0; i <size; i++) {
        printf("\n\n\t arr[%d] : %d",i, arr[i]);
    }
    printf("\n");
}
