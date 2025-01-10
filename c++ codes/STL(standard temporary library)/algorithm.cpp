#include <bits/stdc++.h>
using namespace std;
bool comp (pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second)return true;
    if(p1.second > p2.second)return false;
    if(p1.first > p2.first)return true;
    return false;
}
int main (){
    vector <int> v= { 1,6,5,4,3};
    vector<int>::iterator it = v.begin();
    sort(v.begin(), v.end());
    for (auto it : v){
        cout << it << " ";
    }
    cout << endl;
    //for decreasing order
     //sort( it , it+5, (greater<int>));

    // for (auto it : v){
    //     cout << it << " ";
    // }
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    sort ( a, a+3 ,comp);
    for (auto it : a){
        cout<< it.first << " " << it.second <<endl;
     }
}