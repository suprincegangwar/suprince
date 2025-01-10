#include<stdio.h>
    void swap( int a, int b){
        // int temp = a;
        // a=b;
        // b=temp;
        a=a+b;
        b=a-b;
        a=a-b;
        return;
    }
    int main(){
        int a;
        printf("Enter a :");
        scanf("%d",&a);
        int b;
        printf("Enter b :");
        scanf("%d",&b);
        swap(a,b);
        printf("The value of a = %d\n",a);
        printf("The value of b = %d",b);
        return 0;
    }
