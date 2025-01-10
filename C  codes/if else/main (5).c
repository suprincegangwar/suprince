/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{int n ;
printf("Enter a Number :" );
scanf("%d",&n);
if(n%5==0 || n%3==0){
    printf("Divisible by either 3 or 5" );
}
else{
    printf("NOT Divisible by either 3 or 5");
}
    return 0;
}
