//4. WAP to find factorial using recursion
int factorial(int);

#include<stdio.h>

main()
{
	int num;
	int f;
	
	printf("\n\n\t Enter a number : ");
	scanf("%d",&num);
	
	f=factorial(num);
	printf("\n\n\n\t Factorial : %d", f);
}

int factorial(int n)
{
	if(n==0)
		return 1;
	
	else
		return n*(factorial(n-1));
}
