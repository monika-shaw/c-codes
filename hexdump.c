////
//// Created by shawm on 11-05-2022.
////
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//    size_t offset = 0;
//    for(int c; (c = getchar())!= EOF; offset++)
//    {
//        if(offset % 16==0)
//        {
//            printf("%08x  ",offset);
//        }
//        printf("%02x ",c);
//        if(offset % 16 == 15)
//        {
//            puts(" ");
//        }
//    }
//    if(offset % 16 != 0)
//    {
//        puts("");
//    }
//    printf("%08x\n", offset);
//    return EXIT_SUCCESS;
//}


#include <stdio.h>
#include "stdlib.h"

int add(int a,int b)
{
    int c=a+b;
    return c;
}

int main(void) {
    int (*func)(int, int);
    int a = 10, b = 20,res;
    func=add;
    res=(func)(a,b);
    printf("%d", res);
    return EXIT_SUCCESS;
}

