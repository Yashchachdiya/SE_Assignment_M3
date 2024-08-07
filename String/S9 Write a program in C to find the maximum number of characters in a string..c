//9. Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>

main()
 {
    char str[100];
    int max_len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    max_len = strlen(str);

    printf("Maximum number of characters in the string: %d\n", max_len);
}
