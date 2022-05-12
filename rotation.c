//
// Created by shawm on 11-05-2022.
//
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int a[]={1,2,3,4,5};


    int rotate=2;

    printf("Array before modificatioin\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",a[i]);
    }

    for (int i = 0; i < rotate; ++i) {
        int j,lastElement;
        lastElement=a[5-1];

        for (int j = 5; j >0; --j) {

            a[j]=a[j-1];
        }

        a[0]=lastElement;
    }
    printf("Roatated array is :");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",a[i]);

    }
    return EXIT_SUCCESS;
}