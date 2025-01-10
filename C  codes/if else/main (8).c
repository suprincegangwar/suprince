/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n%3==0 || n%5==0){
        if(n%15!=0)
       { printf("Number is divided by 3 or 5 but not divided by 15");
           
       }
       else{
         printf("Number is divided by 3,5 &15");  
       }
    }
    else{
        printf("nuimber is not divided by 3,5&15");
    }

    return 0;
