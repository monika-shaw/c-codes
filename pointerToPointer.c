//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int *p1;
    int **p2;
    p1=&n;
    p2=&p1;
    printf("%d\n",n);
    printf("%d\n",p1);
    printf("%d\n",*p1);
    printf("%d\n",p2);
    printf("%d\n",**p2);

    return EXIT_SUCCESS;
}
