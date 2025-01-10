#include<stdio.h>

int func(int a,int b)
{
     a = a + b;
     b = a - b;
     a = a - b;
     printf("a:%d\n" ,a);
     printf("b:%d\n" ,b);
     return a;
}


int main()
 {
    int a = 10;
    int b = 12;
     int p = func(a,b);
       printf("a:%d\n" ,a);
     printf("b:%d\n" ,b);
     printf("%d" ,p);
 
 }