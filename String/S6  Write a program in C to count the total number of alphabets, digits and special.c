/*6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.
*/
#include <stdio.h>
#include <string.h>

main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    for (i = 0; str[i]; i++)
	 {
        if (isalpha(str[i]))
		 {
            alphabets++;
        } 
		else if (isdigit(str[i]))
		 {
            digits++;
        } 
		else if (!isspace(str[i]))
		 {
            specialChars++;
        }
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    
}
