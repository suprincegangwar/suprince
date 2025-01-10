#include <stdio.h>

int main() {
    int x=0;
    int l=0;
for(int i=6;i>=1;i--){ 
    
    int a=65;
    int b=70-l;
    for(int j=i;j>=1;j--){
        
        printf("%c ",a);
        a++;
    }
    for(int space=0;space<x;space++){
        printf("  ");
    }
    x=2*l+1;
    for(int k=i;k>=1;k--){
    if(b==70) {
        b--;
      continue;  }
      printf("%c ",b);
      b--;
    }
  l++;
  printf("\n");
}
return 0 ;}