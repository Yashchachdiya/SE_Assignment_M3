/* 4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */


#include<stdio.h>
main()
{
	int n1, n2;
	char choice;
	
	printf("\n\n\t Input a number1 : ");
	scanf("%d",&n1);
	printf("\n\n\t Input a number2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\n\t -----------Simple Calculator-------------");
	printf("\n\n\t +. Addition");
	printf("\n\n\t -. Subtraction");
	printf("\n\n\t *. Multiplication");
	printf("\n\n\t /. Division");
	printf("\n\n\t ------------------------------------------------");
	
	printf("\n\n\n\t Select the operation to perform : ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+': printf("\n\n\t Addition = %d",n1+n2);
				break;
				
		case '-': printf("\n\n\t Subtraction = %d",n1-n2);
				break;
			
		case '*': printf("\n\n\t Multiplication = %d",n1*n2);
				break;
			
		case '/': printf("\n\n\t Division = %d",n1/n2);
				break;
		
		default :
				printf("\n\n\t Invalid choice.. Try again!!!");
				break;
	}
	

	
}

