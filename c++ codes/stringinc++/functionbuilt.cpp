#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Suprince Gangwar";
    reverse(str.begin(),str.end());
    cout << str<<endl;
    cout <<str.substr(1,8)<<endl;
    string s1 = "hello";
    string s2 = "world";
    s1+=s2;
    cout << s1 <<endl;
    string s3 = "abcd";
    char ch = 's';
    s3.push_back(ch);
    cout << s3 <<endl;
    cout << str.size() << endl;
    cout << str.length() << endl;
    char ph[50] = "fghij";
    cout << strlen(ph) << endl;
    int x = 2345;
    string st = to_string(x);
    st += '1';
    cout << st << endl;
}