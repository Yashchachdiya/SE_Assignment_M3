//11. Accept 5 names from user at run time
#include <stdio.h>

main() 
{
    char *names[5]; 
    int i;

    
    printf("\n\t Enter 5 names : ");
    for (i = 0; i < 5; ++i) {
        names[i] = (char *)malloc(50*sizeof(char));
        printf("\n\t Enter name ( %d ) : ", i+1);
        scanf(" %49[^\n]", names[i]); 
    }

    printf("\n------------------------------------------------\n");
    printf("\n\tNames entered :  ");
    for (i=0;i<5;++i)
        printf("\n\t (%d) : %s  ", i + 1, names[i]);

    for (i=0;i<5;++i)
        free(names[i]); 
}
