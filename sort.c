//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5]={5,7,1,2,3},temp=0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array is");
    for (int i = 0; i < 5; ++i) {
        printf("%d",arr[i]);
    }
    return EXIT_SUCCESS;
}