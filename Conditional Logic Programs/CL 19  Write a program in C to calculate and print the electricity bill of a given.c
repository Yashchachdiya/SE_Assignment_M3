/*19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00
*/




main()
 {
    int customerID, units;
    char customerName[50];
    float totalAmount;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);


    if (units <= 350) 
	{
        totalAmount = units * 1.20;
    } 
	else if (units > 350 && units < 600) 
	{
        totalAmount = units * 1.50;
    } else if (units >= 600 && units < 800)
	 {
        totalAmount = units * 1.80;
    } else 
	{
        totalAmount = units * 2.00;
    }

  
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be paid: %.2f\n", totalAmount);


}

