//
// Created by shawm on 11-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int color=0x00ff0000;
    printf("%d\n",(color >> 16) & 0xFF);
    printf("%d",(color >> 8) & 0xFF);
    printf("%d",(color >> 0) & 0xFF);
    return EXIT_SUCCESS;
}