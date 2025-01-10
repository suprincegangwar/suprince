#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int arr[n];
    for (int i  = 0; i< n; i++ ){
        cin >> arr[i]; 
    }
    int l;
    cin >> l;// l is th largest number that have to be found
    int hash[l] = {0};
    for(int i =0 ; i<n; i++){
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }

}