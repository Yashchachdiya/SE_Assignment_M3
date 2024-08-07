//Convert minutes into seconds and hours


#include<stdio.h>
main() 

{
    int minutes;
    int seconds, hours, remaining_minutes;
    printf("\n\t Enter the number of minutes: ");
    scanf("%d", &minutes);
    printf("\n-----------------------------------------------------------\n");
    printf("-------------------------------------------------------------\n");
    seconds = minutes * 60;
    hours = minutes / 60;
    remaining_minutes = minutes % 60;
    printf("\n\t Convert minutes to seconds : ");
    printf("\n\n\t %d minutes is %d seconds ", minutes, seconds);
    
    printf("\n\t Convert minutes to hours and remaining minutes : ");
    printf("\n\n\t %d hours and %d minutes\n", hours, remaining_minutes);
}

