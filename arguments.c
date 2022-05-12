////
//// Created by shawm on 11-05-2022.
////
//#include "stdio.h"
//#include "stdlib.h"
///*
//command line :./echo
// argc=1
// argv[0]="./echo"
// argv[1]=NULL
// argv[2]=undefined
//
// command line : ./echo foo
// argc=2
// argv[0]="./echo"
// argv[1]=foo
// argv[2]=NULL
// argv[3]=undefined
//
//
// command line : ./echo foo three
// argc=3
// argv[0]="./echo"
// argv[1]=foo
// argv[2]=three
// argv[3]=NULL
// argv[4]=undefined
//
// */
//int main(int argc, char *argv[])
//{
//    for (int n = 1; n < argc; ++n) {
//        if (n>1)
//            fputs(" ",stdout);
//        fputs(argv[n],stdout);
//    }
//    puts("");
//    return EXIT_SUCCESS;
//}

#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int a[]={1,2,3,4,5};
    int l= sizeof(a);

    int rotate=2;

    printf("Array before modificatioin\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",a[i]);
    }
    return EXIT_SUCCESS;
}