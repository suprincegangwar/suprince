#include<stdio.h>

int main()
{
        int n;
        printf("enter the numbe:");
        scanf("%d" ,&n);

        for (int i = 1; i <= n; i++)
        {
            printf("*");
            for (int j = 1; j <= i-1; j++)
            {
                printf(" ");
            }
            
           if(i == 1)
           {
            printf(" ");
           }
           else
           {
            printf("*");
           }
                printf("\n");
            
        } 
         for (int i = 1; i <= n+2; i++)
         {printf("*");}



return 0 ;
}