/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
*/
#include <stdio.h>
#include <string.h>


void reverse_string(char str[])
 {
    int length = strlen(str);
    char temp;
    int i;
    for (i = 0; i < length / 2; i++)
	 {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int palindrome(char str[])
 {
    int length = strlen(str);
       int i;
    for (i = 0; i < length / 2; i++) 
	{
        if (str[i] != str[length - i - 1]) 
		{
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    reverse_string(str);
    printf("Reversed string: %s\n", str);

    if (palindrome(str)) {
        printf("string is a palindrome.\n");
    } else {
        printf("string is not a palindrome.\n");
    }

    return 0;
}
