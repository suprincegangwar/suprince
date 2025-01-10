#include <stdio.h>
int main() {

    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[a];
    for (int i =0 ; i < a ; i++){
      scanf("%d",&arr[i]);
        
    }
    int c = arr[b - 1];
    int d = 0;
    for(int i = 0;i < a;i++){
    if(arr[i]>=c && arr[i]>0){
        d++;
    }
}
    printf("%d",d);
    return 0;
}  