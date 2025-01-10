// STL Standard Temporary Library
#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int> v{12,13,24,66};
    vector<int>::iterator yt = v.begin();
    yt++;
    cout << *(yt) << " ";
    yt = yt + 2;
    cout << *(yt) << " ";
    vector<int>::iterator dt = v.end(); // it just points the address after the last element
    dt--;
    cout << *(dt) << " " << endl;

    // vector<int>::iterator  == auto

    vector<int> v1{1,2,3,4,5,6,7,8};
    vector<int>::iterator it = v1.begin();
    for( auto it = v1.begin(); it != v1.end(); it++){
       cout << *(it) << " " << endl;}
    for(auto it : v1){
        cout << it << " ";
    }
    
}