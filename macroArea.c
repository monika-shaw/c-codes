//
// Created by shawm on 09-05-2022.
//
#include <stdio.h>
#include <stdlib.h>
#define AREA(l,b) (l*b)

int main(void)
{
    int l1 = 10, l2 = 6, area;
    area = AREA(l1,l2);
    printf("Area is %d",area);
    return EXIT_SUCCESS;

}