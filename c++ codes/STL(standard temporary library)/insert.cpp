#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6};
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin();
    v.insert(it + 1, 3);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> v1(2,5);
    vector<int>::iterator yt = v1.begin();
    v.insert(v.begin() + 1,v1.begin(),v1.end());
    for (auto i : v )
    {
        cout << i << " ";
    }
    cout << endl;
    cout << v.size();
    cout << endl;
    v.swap(v1);
    for (auto i : v )
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : v1 )
    {
        cout << i << " ";
    }
    return 0;
}