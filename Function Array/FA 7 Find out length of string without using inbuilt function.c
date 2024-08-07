//7. WAP Find out length of string without using inbuilt function
#include<stdio.h>
main()
{
	char str[30];
	int i, count=0;
	printf("\n\n\n\t Enter a string : ");
	
	gets(str);
	for(i=0; str[i]!='\0' ;i++)
	{
		count++;
		
	}
	printf("\n\n\n\t Length of the string : %d", count);
}
