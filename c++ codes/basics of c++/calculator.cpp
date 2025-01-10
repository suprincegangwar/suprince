#include<iostream>
using namespace std;
int main (){
    float n1;
    cin>>n1;
    char o;
    cin>>o;
    float n2;
    cin>>n2;
    switch(o){
        case '+' :
        cout<<n1+n2;
        break;
        case '-' :
        cout<<n1-n2;
        break;
        case '*' :
        cout<<n1*n2;
        break;
        case '/' :
        cout<<n1/n2;
        break;
        default:
        cout<<"Invalid";
        break;

    }
}