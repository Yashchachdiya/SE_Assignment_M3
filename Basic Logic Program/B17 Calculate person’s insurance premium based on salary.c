//. Calculate person’s insurance premium based on salary

#include<stdio.h>
main()

{
    float salary, premium;
    float premium_rate;

    
    printf("\n\t Enter the person's salary: ");
    scanf("%f", &salary);
    if (salary < 20000) 
	{
        premium_rate = 0.05; 
    } 
	else if (salary < 40000)
	{
        premium_rate = 0.10; 
    } 
	else if (salary < 50000) 
	{
        premium_rate = 0.15;
    } 
	else 
	{
        premium_rate = 0.20;
    }
    premium = salary * premium_rate;
    printf("\n\t The insurance premium is: %.2f", premium);
}

