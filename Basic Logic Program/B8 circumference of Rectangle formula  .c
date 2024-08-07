// Find circumference of Rectangle formula : C = 4 * a


#include<stdio.h>
main()

{
    float w, l, perimeter;
    printf("Enter the w of rectangle: ");
    scanf("%f", &w);
    printf("Enter the l of rectangle: ");
    scanf("%f", &l);
    perimeter = 2 * (w + l);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
}

