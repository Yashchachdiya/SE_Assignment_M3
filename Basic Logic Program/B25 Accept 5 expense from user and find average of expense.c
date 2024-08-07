//Accept 5 expense from user and find average of expense


#include<stdio.h>
main() 

{
    float expenses[5];
    float total_expense = 0, average_expense;
    int i;
    for (i = 0; i < 5; i++) 
	{
        printf("\n\t Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        printf("\n--------------------------------------\n");
        total_expense += expenses[i];
    }
    average_expense = total_expense / 5;
    printf("\n--------------------------------------");
    printf("\n\t Total Expense: %.2f\n", total_expense);
    printf("\n--------------------------------------");
    printf("\n--------------------------------------");
    printf("\n\t Average Expense: %.2f\n", average_expense);
    printf("\n--------------------------------------");
}

