#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
     q.back() += 6;

    cout<< q.back() << " ";

    cout<< q.front()<< " ";

    q.pop();
    cout<< q.size()<< " ";
    cout<< q.empty();
}