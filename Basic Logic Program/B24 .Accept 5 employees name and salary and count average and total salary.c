//.Accept 5 employees name and salary and count average and total salary


#include<stdio.h>
main() 

{
    char names[5][50]; 
    float salaries[5]; 
    float total_salary = 0, average_salary;
    int i;
    for (i = 0; i < 5; i++) 
	{
        printf("\n\t Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("\n\t Enter the salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        printf("\n---------------------------------------------------------\n");
        total_salary += salaries[i];
    }
    average_salary = total_salary / 5;
    printf("\n\n\t Total Salary: %.2f", total_salary);
    printf("\n--------------------------------------------------------");
    printf("\n--------------------------------------------------------");
    printf("\n\n\t Average Salary: %.2f", average_salary);
    printf("\n--------------------------------------------------------");
    printf("\n--------------------------------------------------------");
}

