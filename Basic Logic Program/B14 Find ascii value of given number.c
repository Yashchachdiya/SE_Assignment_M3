// Find ascii value of given number


#include<stdio.h>
main()

{
    char ch;
    int ascii_value;
    printf("\n\t Enter a character: ");
    scanf(" %s", &ch);
    printf("\n---------------------------------------------------------");
    ascii_value = (char)ch;
    printf("\n\t ASCII value of '%c' is: %d", ch, ascii_value);
}
