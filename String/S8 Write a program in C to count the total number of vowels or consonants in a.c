/*8. Write a program in C to count the total number of vowels or consonants in a
string.*/

#include <stdio.h>
#include <string.h>
main()
 {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; 

    int vowels = 0, consonants = 0, i;
    for (i = 0; str[i]; i++) 
	{
        char c = tolower((unsigned char)str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		 {
            vowels++;
        } else if (c >= 'a' && c <= 'z') 
		{
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

}
