//WAP to print 972 to 897 using for loop

#include<stdio.h>
main()
{
	int i, n, rows=4;
 
    for(n=0;n<rows;n++)
	{ 
		for(i=972;i>=897;--i)
    	{

        	printf("%d ", i);
    	}
    }
    printf("\n");
}
