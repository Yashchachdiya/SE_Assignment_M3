//14.Perform 2D matrix array
#include<stdio.h>
main()
{
	int mat[3][3]={11, 22, 33, 44, 55, 66, 77, 88, 99};
	int r, c;
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",mat[r][c]);
		}
		
		printf("\n");
	}
	
}
