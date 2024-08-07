// .find the area of a rectangular prism formula : A=2(wl+hl+hw)


#include<stdio.h>
main()

{
    float w, l, h, area;
    printf("\n\t Enter the w : ");
    scanf("%f", &w);
    printf("\n\t Enter the l : ");
    scanf("%f", &l);
    printf("\n\t Enter the h : ");
    scanf("%f", &h);
    printf("\n---------------------------------------------------------");
    area = 2 * (w * l + h * l + h * w);
    printf("\n\t rectangular prism: %.2f\n", area);
}

