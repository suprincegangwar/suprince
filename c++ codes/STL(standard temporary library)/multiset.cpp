#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset <int> st; //it obeys only the sorted rule
    st.insert(1);
    st.emplace(2);
    //st.push(2); it dont take it
    st.insert(2);
    st.insert(4);
    st.insert(3);
    st.insert(7);
    //{1,2,2,3,4,7} stored like that
    st.erase(2);//it erase all the 2
   
   int cnt = st.count(2);

   st.erase(st.find(1));
   st.erase(st.find(1),st.find(2));

  // Unordered set  -  not sorted but unique
}