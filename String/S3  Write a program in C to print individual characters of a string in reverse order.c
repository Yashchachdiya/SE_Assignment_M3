//3. Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
#include <string.h>

 main()
  {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("Individual characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("Character %d: %c\n", length - i, str[i]);
    }

}

