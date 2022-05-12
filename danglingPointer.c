//
// Created by shawm on 10-05-2022.
//
//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>

//    int fun()
//    {
//        int y=10;
//        return y;
//    }
//    int main()
//    {
//        int p=fun();
//        printf("%d", p);
//        return 0;
//    }

int *fun(){
    int y=10;
    return &y;
}
int main() {
    int *p = fun();
    printf("%d", *p);
    return 0;
}




