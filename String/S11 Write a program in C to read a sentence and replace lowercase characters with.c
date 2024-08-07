/*11.Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include <stdio.h>
#include <string.h>


main()
 {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 
        int i;
    for ( i = 0; str[i]; i++)
	 {
        if (islower(str[i]))
		{
            str[i] = toupper(str[i]);
        } 
		else if (isupper(str[i]))
		{
            str[i] = tolower(str[i]);
        }
    }

    printf("The modified sentence is: %s\n", str);
}
