#include<stdio.h>
int maze(int n,int m){
    int rightways = 0;
    int downways = 0;
if(n==1 && m==1) return 1;
else if (n==1){
    rightways += maze(n,m-1);
}
else if (m==1){
    downways += maze(n-1,m);
}
else if (n>1&&m>1){
    rightways += maze(n,m-1);
     downways += maze(n-1,m);
}
return rightways + downways;
}
int main (){
    int n;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the no of column : ");
    scanf("%d",&m);
    printf("%d",maze(n,m));
    return 0;
}