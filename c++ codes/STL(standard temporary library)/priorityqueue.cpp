#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q;// it save at top which element that is largest
    // known as max heap
    q.push(1); //{t = log n}
    q.push(2);
    q.push(6);
    q.push(4);
    q.emplace(5);
   
    cout<< q.top() << " ";//{t = o(1)}

    q.pop();//{t = log n}
    
    cout<< q.top() << " ";
    cout<< q.size()<< " ";
    cout<< q.empty()<< " ";

    priority_queue<int,vector<int>,greater<int>>pq;//for save the lowest one at top
    // known as min heap 
    pq.push(1);
    pq.push(2);
    pq.push(6);
    pq.push(4);

    cout<< pq.top() << " ";
}   