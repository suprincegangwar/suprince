#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[1] << endl;
    
    vector < pair<int,int>>vec;
    vec.push_back({4,3});
    vec.emplace_back(1,2);
    cout << vec[1].second << endl;
    cout << vec[1].first << endl;
    
    vector<int> ve(4,10);
    cout<< ve[2] << endl;
    vector<int> te (5); //panch zero stre ho jayanga
    te.push_back(2);
    cout<< te[5] << endl;

    vector<int> v1(ve); // for copy ve into v1
    cout<< v1[2] << endl;
}