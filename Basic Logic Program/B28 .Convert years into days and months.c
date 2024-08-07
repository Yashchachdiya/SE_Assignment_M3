//.Convert years into days and months



#include<stdio.h>
main() 

{
    int years;
    int total_days, months, days;
    printf("\n\t Enter the number of years: ");
    scanf("%d", &years);
    printf("\n----------------------------------------------------------\n");
    total_days = years * 365;
    months = total_days / 30.42;
    days = total_days - (months * 30.42);
    printf("\n\t %d years is approximately %d months and %d days", years, months, days);
}

