/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot */

#include <stdio.h>

main()
 {
    float temperature;

    printf("Enter the temperature in centigrade: ");
    scanf("%f", &temperature);

    
    if (temperature < 0)
	 {
        printf("\n Freezing weather");
    } 
	else if (temperature >= 0 && temperature < 10) 
	{
        printf("\nVery Cold weather");
    } 
	else if (temperature >= 10 && temperature < 20)
	 {
        printf("Cold weather\n");
    } else if (temperature >= 20 && temperature < 30)
	 {
        printf("\n Normal in Temp");
    } 
	else if (temperature >= 30 && temperature < 40) 
	{
        printf("\n It's Hot");
    }
	 else if (temperature >= 40) 
	 {
        printf("\n It's Very Hot");
    } else
	 {
        printf("\n Invalid temperature range");
    }

}

