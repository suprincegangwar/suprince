#include <bits/stdc++.h>
using namespace std;
int main(){
    int num = 7;
    int cnt = __builtin_popcount(num);// tells about the how much one in binary  
    cout << cnt << endl;
    long long num1 = 123456788990;
    int cnt1 = __builtin_popcountll(num1);  
    cout << cnt1 << endl;
    string s = "123";
    do{cout << s << endl;
    }while (next_permutation(s.begin(),s.end()));
    int arr[5] = {1,2,3,4,5};
    int max = max_element(arr[0],arr[0] + 5);
    cout<< max;

}