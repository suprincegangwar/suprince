#include <bits/stdc++.h>
using namespace std;
int main () {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second <<endl;
    pair <int, pair<int,int>> g={1,{2,3}};
    cout << g.first << " " << g.second.first <<" " << g.second.second;
    pair <int ,int > arr[] = {{1,2}, {3,4}, {5,6}};
    cout << endl << arr[1].second;

    }