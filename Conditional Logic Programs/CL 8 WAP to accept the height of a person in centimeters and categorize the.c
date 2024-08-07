/*8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include <stdio.h>

main()
 {
    float height;
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);


    if (height < 150.0) 
	{
        printf("\n You are categorized as Dwarf.");
    } else if (height >= 150.0 && height <= 165.0) 
	{
        printf("\n You are categorized as Average height.");
    } else if (height > 165.0 && height <= 195.0) 
	{
        printf("\n You are categorized as Tall.");
    } else 
	{
        printf("\n You are categorized as normal height.");
    }

    
}

