//Find character value from ascii

#include<stdio.h>
main()

{
    int ascii_code;
    printf("\n\t Enter ASCII code : ");
    scanf("%d", &ascii_code);
    printf("\n------------------------------------------------");
    char character = (char)ascii_code;
    printf("\n\t Character to ASCII code %d is: %c\n", ascii_code, character);
}
