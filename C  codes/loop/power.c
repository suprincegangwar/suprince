#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter Number a = ");
    scanf("%d", &a);

    printf("Enter Number b = ");
    scanf("%d", &b);

    int p = 1;
    for (int i = 1; i <= b; i++){
        p = p * a;

    }
    printf("%d", p);
    return 0;
}