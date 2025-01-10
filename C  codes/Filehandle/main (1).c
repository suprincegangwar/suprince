/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PI  3.1415 
# define area(r) (PI*r*r)

int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    printf("%f", area(n));

    return 0;
}