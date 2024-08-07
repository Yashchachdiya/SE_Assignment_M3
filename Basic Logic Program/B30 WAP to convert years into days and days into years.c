//30. WAP to convert years into days and days into years.

#include<stdio.h>
main() 

{
    int years, days;

    printf("\n\t Enter the number of years : ");

    scanf("%d", &years);
    printf("\n-----------------------------------------------------------");

    days=years*365;

    printf("\n\t Convert Years to Days : ");
    printf(" %d years is equal to %d days ", years, days);
    printf("\n-------------------------------------------------------");

    years=days/365;     

    printf("\n\t Convert Days to Years : "); 
    printf(" %d days is approximately equal to %d years ", days, years);
    printf("\n---------------------------------------------------------");
}
