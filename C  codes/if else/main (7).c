/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{int a ;
printf("Enter 1 Number :" );
scanf("%d",&a);
int b ;
printf("Enter 2 Number :" );
scanf("%d",&b);
int c ;
printf("Enter 3 Number :" );
scanf("%d",&c);
if(a+b>c&&b+c>a&&a+c>b){
    printf("Sides of a triangle");
}
else{
    printf(" Do not sides of a triangle");
}

 return 0;
}
