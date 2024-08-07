/* If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-
*/ 



#include <stdio.h>
main()
 {
    int customerID, units;
    char name[50];
    float billAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", name);  
    printf("Enter units consumed: ");
    scanf("%d", &units);


    
    if (units < 350) 
	{
        billAmount = units * 1.20;
    } 
	else if (units >= 350 && units < 600) 
	{
        billAmount = units * 1.50;
    }
	 else if (units >= 600 && units < 800) 
	 {
        billAmount = units * 1.80;
    } else 
	{
        billAmount = units * 2.00;
    }

    
    if (billAmount > 800) 
	{
        billAmount += billAmount * 0.18;
    }

    
    if (billAmount < 256)
	 {
        billAmount = 256;
    }

    
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be paid: Rs. %.2f\n", billAmount);

    
}

