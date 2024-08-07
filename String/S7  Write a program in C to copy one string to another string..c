//7. Write a program in C to copy one string to another string.
#include <stdio.h>
#include <string.h>

main()
 {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0'; 

    strcpy(str2, str1); 

    printf("Original String: %s\n", str1);
    printf("Copied String: %s\n", str2);

    
}
