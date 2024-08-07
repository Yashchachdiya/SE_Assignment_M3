/*17.Write a C program to check whether a triangle can be formed with the given
values for the angles.
 */

#include <stdio.h>

main() 
{
    float angle1, angle2, angle3, sum;

    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    printf("Enter the third angle: ");
    scanf("%f", &angle3);

  
    sum = angle1 + angle2 + angle3;

   
    if (sum == 180.0) 
	{
        printf("A triangle can be formed with the given angles.\n");
    } else 
	{
        printf("A triangle can not be formed with the given angles.\n");
    }

    
}

