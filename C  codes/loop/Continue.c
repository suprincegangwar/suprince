// Write a Programme to write numbers from 1 to 100 Odd Numbers
#include<stdio.h>
int main (){
    for(int i = 1; i <= 100; i+1){
        if(i % 2 ==0)
        {continue;}
        printf("%d",i);
    }
    return 0;

}