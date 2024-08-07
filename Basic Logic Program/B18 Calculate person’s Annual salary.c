//Calculate person’s Annual salary

#include<stdio.h>
main()

{
    float monthly_salary, annual_salary;
    printf("\n\t Enter the person's monthly salary: ");
    scanf("%f", &monthly_salary);
    annual_salary = monthly_salary * 12;
    printf("\n\t The annual salary is: %.2f", annual_salary);
}

