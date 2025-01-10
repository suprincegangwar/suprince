#include <stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
for(int i =1;i<=2*n -1;i++){
    for(int j = 1;j<=2*n-1;j++){
        if (j==i || j==2*n-i){
            printf("%d",j);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");

   }
   return 0;
}
