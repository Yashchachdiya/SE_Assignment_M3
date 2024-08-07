//9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>

main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
	{
        printf("\n The character is an uppercase letter.");
    } else if (ch >= 'a' && ch <= 'z')
	{
        printf("\n The character is a lowercase letter.");
    } else if (ch >= '0' && ch <= '9')
	{
        printf("\n The character is a digit.");
    } else 
	{
        printf("\n The character is a special character.");
    }

  
}

