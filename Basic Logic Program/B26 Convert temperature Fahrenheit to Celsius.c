// Convert temperature Fahrenheit to Celsius


#include<stdio.h>
main() 

{
    float fahrenheit, celsius;
    printf("\n\t Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("\n----------------------------------------------\n");
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("\n\t Temperature in Celsius: %.2f", celsius);
}

