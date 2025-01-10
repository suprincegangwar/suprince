#include<iostream>
using namespace std;
int maxofthree(int a,int b,int c){
    if (a>b and a>c) return a;
    else if (b>c)return b;
    else  return c;
}
int main (){
    cout<<maxofthree(4,5,6);
}