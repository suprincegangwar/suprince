#include <bits/stdc++.h>
using namespace std;
string sorted(string str , string ptr)
{
    vector<int> freq(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        int ind = str[i] - 'a';
        freq[ind]++;
    }
    vector<int> treq(26, 0);
    for (int i = 0; i < ptr.size(); i++)
    {
        int ind = ptr[i] - 'a';
        treq[ind]++;
    }
    bool flag = true;
    for(int i = 0;i<26;i++){
        if (freq[i] != treq[i]){
        flag = false;
        break;
        }
    }
    if(flag == false)
    return "not anagram";
    else
    return "anagram";
}
int main()
{
    string str;
    cin >> str;
    cout << endl;
    string ptr;
    cin >> ptr;
    cout << sorted(str , ptr);
}