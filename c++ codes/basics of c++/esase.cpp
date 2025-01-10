#include<bits/stdc++.h>
using namespace std;
int main  () {
vector<int> v = {1,2,3,4,5,6};
for ( auto it : v){
    cout << it << " ";
}
    cout << endl;
vector<int>::iterator it = v.begin();
v.erase(it + 1 , it +3);
for ( auto it : v){
    cout << it << " ";
}
return 0;
}