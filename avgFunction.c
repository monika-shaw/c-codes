//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>
int avg(int a[])
{
    int sum=0;
    for (int i = 0; i < 5; ++i) {
        sum=sum+a[i];
    }
    return sum;

}
int main(void)
{
    int a[5], call;
    printf("Enter the elements");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&a[i]);
    }
    call=avg(a);
    printf("%d",call);
    return EXIT_SUCCESS;

}


