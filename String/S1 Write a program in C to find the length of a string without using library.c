/*1. Write a program in C to find the length of a string without using library
functions*/

#include<stdio.h>
main()
{
	char str[30];
	int i, count=0;
	printf("\n\n\n\t Enter a string : ");
	scanf("%s",&str);

	for(i=0; str[i]!='\0' ;i++)
	{
		count++;
		
	}
	printf("\n\n\n\t Length of the string : %d", count);
}
