#include <iostream>
using namespace std;
int fact(int x){
   if(x==0||x==1){
    return 1;
   }
   else 
   return x*fact(x-1);

}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k =0;k<=n-i+1;k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<"  ";
        }
        cout<<endl;
    }

}