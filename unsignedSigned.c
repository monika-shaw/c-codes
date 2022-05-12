//
// Created by shawm on 09-05-2022.
//the expression -1 is of type int, and has the value -1.
// The rules for signed-to-unsigned conversion say that the value is reduced modulo UINT_MAX + 1,
// so -1 will convert to UINT_MAX (which is probably 0xffffffff or 4294967295 if unsigned int is 32 bits).
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     unsigned int a=-1;
    printf("%u",a);
    return EXIT_SUCCESS;
}
