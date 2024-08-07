//13.Write a program in C to remove characters from a string except alphabets.


#include <stdio.h>
#include <string.h>

main() 
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    for (i = 0, j = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("after removing non-alphabets: %s\n", str);

}
