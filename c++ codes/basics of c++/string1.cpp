#include <bits/stdc++.h>
using namespace std;
int main (){
    char arr[3][3];
    int real = 'A' +'B'+'C';
    for(int i =0 ; i<3 ;i++){
        int sum = 0;
        for(int j =0;j<3;j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        if (sum != real){
            cout << (char)(real - (sum - '?'));
        }
    }
    return 0;
}
