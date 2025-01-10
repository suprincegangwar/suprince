// odd indices balo ko 2 sa multiply 
// even valo ko 10 sa 
#include<stdio.h>
int main(){
     int n ;
    printf("Enter the size of array : ");
    scanf ("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the no. %d :",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i = 0;i<n;i++){
       if (i%2==0) printf("%d ",10*arr[i]);
       else  printf("%d ",2*arr[i]);
     }
    return  0;
}