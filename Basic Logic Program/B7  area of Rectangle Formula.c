//Find area of Rectangle Formula : A=wl



#include<stdio.h>
main()

{
    float w, l, area;
    printf("\n\t Enter w of rectangle: ");
    scanf("%f", &w);
    printf("\n\t Enter the l of rectangle: ");
    scanf("%f", &l);
    printf("\n---------------------------------------------------------");
    area = w * l;
    printf("\n\t Area of rectangle: %.2f\n", area);
}

