//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=10,b=20,sum;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum=*p1 + *p2;
    printf("%d",sum);
    return EXIT_SUCCESS;
}
