// 15. Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
//#include <ctype.h>

void find_largest_smallest_words(char *str,int INT_MAX ) 
{
    char *largest_word = NULL;
    char *smallest_word = NULL;
    int largest_len = 0;
    int smallest_len = INT_MAX;
    char *word = strtok(str, " ");

    while (word != NULL)
	 {
        int len = strlen(word);

        if (len > largest_len) 
		{
            largest_len = len;
            largest_word = word;
        }


        if (len < smallest_len)
	    {
            smallest_len = len;
            smallest_word = word;
        }

        word = strtok(NULL, " ");
    }

    printf("Largest word: %s\n", largest_word);
    printf("Smallest word: %s\n", smallest_word);
}

int main()
{
	
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    find_largest_smallest_words(str);

}
