#include <bits/stdc++.h>
using namespace std;
string longestprifix(vector<string> &str)
{
    sort(str.begin(), str.end());
    int i = 0, j = 0;
    string s1 = str[0];
    string s2 = str[str.size() - 1];
    string ans = "";

    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            ans += s1[i];
            i++ ;
            j++ ;
        }
        else
            break;
    }
    return ans;
}
int main()
{
    int n;
    cout << "No of string : ";
    cin >> n;
    cout << "Enter the string";
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << longestprifix(str);
}