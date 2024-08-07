//18. Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

main()
  {
    float costPrice, sellingPrice, profitLoss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice)
	 {
        profitLoss = sellingPrice - costPrice;
        printf("\n You made a profit of %.2f", profitLoss);
    }
	 else if (sellingPrice < costPrice) 
	 {
        profitLoss = costPrice - sellingPrice;
        printf("\n You incurred a loss of %.2f", profitLoss);
    } else 
	{
        printf("\n There is no profit or loss.");
    }

    return 0;
}

