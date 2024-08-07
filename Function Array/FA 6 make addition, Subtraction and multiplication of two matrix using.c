/*6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array*/
#include <stdio.h>
 main() 
 {
    int matrix1[2][2], matrix2[2][2], addition[2][2],Subtraction[2][2],multiplication[2][2],k;
    int i, j;

  
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 2; j++)
		 {
            addition[i][j] = matrix1[i][j] + matrix2[i][j];
         }
    }
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            Subtraction[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
for(i=0;i<3;i++)
	 {
		for(j=0;j<3;j++)
		{
			multiplication[i][j]=0;
			for(k=0;k<3;k++)
			{
				multiplication[i][j]=multiplication[i][j]+(matrix1[i][k]*matrix2[k][j]);
				//mat3[r][c]+=mat1[r][k]*mat2[k][c];
			}
		}


    printf("Matrix 1:\n\n");
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 2; j++)
		 {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n\n");
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("addition:\n\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", addition[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction:\n\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", Subtraction[i][j]);
        }
        printf("\n");
    }
 printf("multiplication:\n\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d ", multiplication[i][j]);
        }
        printf("\n");
    }

}
}
