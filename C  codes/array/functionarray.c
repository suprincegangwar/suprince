// yaha change by reference hota ha 
// array ka first value ka address ka store hota ha
#include <stdio.h>
int  fun(int a []){
a[0] = a[0] + a[1];
a[1] = a[0] - a[1];
a[0] = a[0] - a[1];
return 0;
}
int main(){
    int arr[2];
    for(int i = 0;i<=1;i++){
        printf("Enter the no. %d :",i+1);
        scanf("%d",&arr[i]);
    }
    fun(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}