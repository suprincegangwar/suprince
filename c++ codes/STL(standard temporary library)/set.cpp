#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> st; // it stored element in sorted and uniqe methord
    st.insert(1);
    st.emplace(2);
    //st.push(2); it dont take it
    st.insert(2);
    st.insert(4);
    st.insert(3);
    st.insert(7);
    //{1,2,3,4,7} stored like that
    st.erase(3);
    auto it = st.find(3);
    cout << *it << " ";
    auto yt  = st.find(5);//if element not there it gaves the next last index
    cout << *yt <<" ";
     
    int cnt = st.count(1); 
    cout << cnt <<" ";
}