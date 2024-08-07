/*DisplayThis Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address */


#include <stdio.h>
main() 

{
   
    char name[15] = "Yash Chachdiya";
    char birthDate[18] = "18 may 2003";
    int age = 21;
    char address[65] = "Dhoraji, Gujarat";
    
    
    printf("\n\t 1. Your Name: %s\n", name);
    printf("\n\t 2. Your Birth Date: %s\n", birthDate);
    printf("\n\t 3. Your Age: %d\n", age);
    printf("\n\t 4. Your Address: %s\n", address);
}

