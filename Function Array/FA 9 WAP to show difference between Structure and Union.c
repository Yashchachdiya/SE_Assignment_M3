//9. WAP to show difference between Structure and Union.
#include <stdio.h>


struct StructExample
 {
    int intVal;
    float floatVal;
};


union UnionExample
 {
    int intVal;
    float floatVal;
};

int main() 
{
    
    struct StructExample s;
    s.intVal = 10;
    s.floatVal = 20.5;

    
    printf("\n\n Structure:");
    printf("\n\n intVal: %d", s.intVal);
    printf("\n\nloatVal: %.2f", s.floatVal);


    union UnionExample u;
    u.intVal = 10;
    

    printf("\n Union :");
    printf("\n intVal: %d", u.intVal);

    
    u.floatVal = 20.5;
    printf("\n Union :");
    printf("\n intVal: %d ", u.intVal);
    printf("\nfloatVal: %.2f", u.floatVal);

    return 0;
}

