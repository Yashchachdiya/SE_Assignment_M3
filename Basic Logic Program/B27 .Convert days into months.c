//Convert days into months

#include<stdio.h>
main() 

{
    int days;
    float months;
    printf("\n\t Enter the number of days: ");
    scanf("%d", &days);
    printf("\n----------------------------------------\n");
    months = days / 30.42;
    printf("\n\t %d days is approximately %.2f months", days, months);
}

