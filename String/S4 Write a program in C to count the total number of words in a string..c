//4. Write a program in C to count the total number of words in a string.
#include <stdio.h>
#include <ctype.h>

main() 
{
    char str[100];
    int i, wordCount = 0;
    int inWord = 0;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
	 {
        if (isspace(str[i]))
		 {
            
            if (inWord) 
			{
                
                inWord = 0;
            }
        }
		 else 
		 {
            
            if (!inWord)
			 {
                
                wordCount++;
                inWord = 1;
            }
        }
    }

    printf("Total number of words: %d\n", wordCount);

    
}

