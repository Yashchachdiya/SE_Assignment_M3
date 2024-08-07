//2. Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>

main() 
{
    char str[100];
    int i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';


    printf("Individual characters in the string:\n");
    for (i = 0; i < strlen(str); i++) 
	{
        printf("Character %d: %c\n", i + 1, str[i]);
    }

    
}

