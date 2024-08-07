// Find area of Triangle Formula : A = 1/2 × b × h


#include<stdio.h>
main()

{
    float b, h, area;
    printf("\n\t Enter the b of triangle: ");
    scanf("%f", &b);
    printf("\n\t Enter the h of triangle: ");
    scanf("%f", &h);
    printf("\n---------------------------------------------------------");
    area = 0.5 * b * h;
    printf("\n\t Area of the triangle: %.2f\n", area);
}
