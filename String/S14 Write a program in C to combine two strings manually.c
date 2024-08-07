//14.Write a program in C to combine two strings manually


#include <stdio.h>

main()
 {
    char str1[100], str2[100], result[200];
    int i, j;

    printf("Enter the first string : ");
    scanf("%99s", str1);

    printf("Enter the second string : ");
    scanf("%99s", str2);

    i = 0;
    while (str1[i] != '\0') 
	{
        result[i] = str1[i];
        i++;
    }

    j = 0;
    while (str2[j] != '\0') 
	{
        result[i + j] = str2[j];
        j++;
    }

    result[i + j] = '\0'; 
    printf("Combine string: %s\n", result);

    ;
}
