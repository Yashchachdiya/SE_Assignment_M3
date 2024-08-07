// Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
main()

{
    float width, length, height, area;

   
    printf("\n\t Enter the width : ");
    scanf("%f", &width);
    printf("\n\t Enter the length : ");
    scanf("%f", &length);
    printf("\n\t Enter the height : ");
    scanf("%f", &height);
    printf("\n---------------------------------------------------------");


    
    area = 2 * (width * length + height * length + height * width);

   
    printf("\n\t  area of the rectangular prism: %.2f\n", area);
}

