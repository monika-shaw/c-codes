//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int student[5],sum,avg=0;
    printf("Enter the students");
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&student[i]);
    }

    for (int i = 0; i < 5; ++i) {
        sum=sum+student[i];
    }

    printf("sum is %d",sum);
    return EXIT_SUCCESS;

}