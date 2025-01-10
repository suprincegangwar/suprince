/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{ int SP;// Selling Price ka dabba ban gaya 
    printf("Enter Selling price :  ");
    scanf("%d",&SP); 
    int CP;// Cost Price  ka Dabba ban gaya
    printf("Enter Cost Price : ");
    scanf("%d",&CP);
    if(SP>CP){
        printf("profit");
    }
    if(CP>SP){
        printf("loss");
    }
    if(CP==SP){
        printf("No loss No profit");
    }
    return 0;
}
