#include <stdio.h>
int main(){
    int  i,n , x, arm ;
    printf("Enter the Number : ");
    scanf ("%d",&n);
// for(int i=1;i<=n;i++){
    arm = 0;
 while (i>0){
    x = i%10;
    arm = arm + ( x*x*x );
    i = i/10; 
 if (arm == i )
 printf ("%d is armstrong ", i); 
 else
  printf ("%d is  not armstrong ", i); 
}
    
    return 0;
}