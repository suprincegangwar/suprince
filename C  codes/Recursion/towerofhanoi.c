// 3 tower are there in which rings are powred
// source , helper, destination  A B C ;
#include <stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);
    return ;
}
int main (){
    int n;
    printf("enter a Number : ");
    scanf("%d",&n);
    tower(n,'A','B','c');
    return 0;
}