/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required? */


#include<stdio.h>
main()

{
    int num_students;
    int apples_per_student = 5;
    int total_apples;
    printf("\n\t Enter the number of students: ");
    scanf("%d", &num_students);
    total_apples = num_students * apples_per_student;
    printf("\n\t Total apples required: %d\n", total_apples);
}

