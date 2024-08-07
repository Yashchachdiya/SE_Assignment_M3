//10.Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>

main() 
{
    char str[100], substr[100];
    int start, end, len, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the ending index of the substring: ");
    scanf("%d", &end);

    len = end - start + 1;

    if (start < 0 || end >= strlen(str) || start > end)
	 {
        printf("Invalid indices. Please enter valid indices.\n");
        return 1;
    }

    for (i = start, j = 0; i <= end; i++, j++) 
	{
        substr[j] = str[i];
    }

    substr[j] = '\0'; 
    printf("The extracted substring is: %s\n", substr);

  
}
