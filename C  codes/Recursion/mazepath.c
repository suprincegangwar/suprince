// condn only move right or down 
// start 1,1 end n,m
#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways = 0;
    int downways = 0;
    if (cr==er && cc==ec)return 1;
    else if (cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    else if (cc==ec){
        downways += maze(cr+1,cc,er,ec);
    }
    else if (cr<er || cc<ec){
         rightways += maze(cr,cc+1,er,ec);
         downways += maze(cr+1,cc,er,ec);
    }
    int totalways = rightways + downways;
    return totalways;
    }   
int main (){
    int n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the no of column : ");
    scanf("%d",&m);
    printf("%d",maze(1 ,1,n,m));
    return 0;
}