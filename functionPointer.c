//
// Created by shawm on 10-05-2022.
//
#include <stdio.h>
#include <stdlib.h>


//int add(int a1,int a2)
//{
//    int sum=a1+a2;
//    return sum;
//}
//int main(void)
//{
//    int a=10,b=20,res;
//    int *p1,*p2;
//    p1=&a;
//    p2=&b;
//    res= add(p1,p2);
//    printf("res is %d",res);
//}

int add(int a,int b)
{
      int c;
      c=a+b;
    return c;
}
int main()
{
    int a=10,b=20,res;
    int (*funp) (int, int);
    funp=add;
    res= funp(a,b);
    printf("%d",res);
    return EXIT_SUCCESS;
}
