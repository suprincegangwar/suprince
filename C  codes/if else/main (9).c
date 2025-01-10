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
if(a>b){
    if(a>c)
    {printf("%d is greatest" ,a);}
    else{printf("%d is greatest" ,c);}
}
else{
    if(b>c)
    {printf("%d  is greatest", b);}
    else{printf("%dis greatest",c);}
}

    return 0;
}
