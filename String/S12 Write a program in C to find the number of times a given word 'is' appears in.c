/*12.Write a program in C to find the number of times a given word 'is' appears in
the given string*/

#include <stdio.h>
#include <string.h>

main()
 {
    char str[100];
    char word[] = "is";
    int count = 0;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    ptr = strstr(str, word);
    while (ptr != NULL)
	{
        count++;
        ptr = strstr(ptr + 1, word);
    }

    printf("The word 'is' appears %d times in the string.\n", count);

}
