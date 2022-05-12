//
// Created by shawm on 10-05-2022.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int roll;
    char name[20];
}employee;

int main() {
//    struct Employee employee;
    employee.roll = 23;
    strcpy(employee.name, "Arun");
    printf("roll %d", employee.roll);
    printf("name is %s", employee.name);
    return EXIT_SUCCESS;
}
