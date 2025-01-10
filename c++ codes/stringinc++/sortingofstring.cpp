#include <bits/stdc++.h>
using namespace std;
string sorted(string str)
{
    vector<int> freq(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        int ind = str[i] - 'a';
        freq[ind]++;
    }
    int j = 0;
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
    return str;
}
int main()
{
    string str;
    cin >> str;
    cout << sorted(str);
}