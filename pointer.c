//
// Created by shawm on 10-05-2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=50;
    int *ptr;
    ptr=&a;
    printf("%x\n",ptr);
    printf("%d\n",&a);
    printf("%d",*ptr);
}
