#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    stack<int>st;
    while(vec!=NULL || !st.empty()){
        if(vec!=NULL){
            st.push(vec)
            vec = vec -> Left;
        }
        else{
            temp =st.top()->right;
            if(temp==NULL){
                temp = st.pop();
                st.pop();
                post.add(temp);
                while(!st.empty && temp == st.top()->right){
                    temp= st.top() , st.pop();
                    post.add(temp->vd);
                }
            }
            else 
            vec = temp;
        }
    }
}