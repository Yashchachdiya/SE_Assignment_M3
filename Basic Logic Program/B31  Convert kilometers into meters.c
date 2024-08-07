//31. Convert kilometres into meters.

#include<stdio.h>
main() 

{
    float kilometers, meters;

    printf("\n\t Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    printf("\n-----------------------------------------------------");

    meters=kilometers*1000;

    printf("\n\t Convert kilometers to meters : ");
    printf(" %.2f kilometers is equal to %.2f meters", kilometers, meters);
    printf("\n-----------------------------------------------------");
}
