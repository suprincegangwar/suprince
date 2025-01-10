#include <bits/stdc++.h>
using namespace std;
int main (){
deque <int> dq;
dq.push_back(2);
dq.emplace_back(3);
dq.push_front(4);
dq.emplace_front(5); // these push front has less time cmplexitiy then the insert in the vector
dq.pop_back();
dq.pop_front();
for(auto i : dq){
    cout << i << " ";
}
    return 0;
}