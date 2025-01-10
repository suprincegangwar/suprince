/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ int l;
    printf("Enter length :  ");
    scanf("%d",&l); 
    int b;
    printf(" Enter breath : ");
    scanf("%d",&b);
    int a=l*b;
    int p= 2 *(l+b);
    if(a>p){
        printf("Area is Greater than Perimeter");
    }
    if(a<p){
        printf("Perimeter is Greater than Area");
    }
    if(a==p){
        printf("Area is Equals to Perimeter");
    }
    return 0;
}
