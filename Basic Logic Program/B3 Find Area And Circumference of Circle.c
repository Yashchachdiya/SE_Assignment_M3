//WAP to Find Area And Circumference of Circle


#include<stdio.h>

main()
{
    float radius, area, circumference, pi=3.14;

	    
    	printf("\n\t Enter the radius of the circle: ");
    	scanf("%f", &radius);
    	printf("\n---------------------------------------------------------");

   		area = pi * radius * radius;
    	circumference = 2 * pi * radius;

  
    	printf("\n\t Area of the circle: %.2f\n", area);
    	printf("\n\t Circumference of the circle: %.2f\n", circumference);
}
