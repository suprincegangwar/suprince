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
        int sume=0;
        int sumo=0;
     for(int i = 0;i<n;i++){
       if (i%2==0) sume = sume + arr[i];
       else  sumo = sumo + arr[i];}
     printf("%d",sume-sumo);
    return  0;
}