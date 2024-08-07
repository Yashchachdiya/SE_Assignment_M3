/*
8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following

b. Write a program of structure for five employee that
provides the following information -print and display
empno, empname, address andage
*/
#include <stdio.h>

struct Employee {
    int empno;
    char empname[100];
    char address[100];
    int age;
};

void print_employee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp1 = {1, "lav katariya", "123 rajkot St", 30};
    struct Employee emp2 = {2, "deep rav", "456 rajkot St", 25};
    struct Employee emp3 = {3, "sai ketan", "789 rajkot St", 40};
    struct Employee emp4 = {4, "Arman malik", "321 rajkot St", 35};
    struct Employee emp5 = {5, "vishal pande", "901 rajkot St", 20};

    printf("Employee 1:\n");
    print_employee(emp1);

    printf("\nEmployee 2:\n");
    print_employee(emp2);

    printf("\nEmployee 3:\n");
    print_employee(emp3);

    printf("\nEmployee 4:\n");
    print_employee(emp4);

    printf("\nEmployee 5:\n");
    print_employee(emp5);

    
}
