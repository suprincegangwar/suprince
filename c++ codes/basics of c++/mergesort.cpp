#include <bits/stdc++.h>
using namespace std;
void merge(vector <int >&nums , int low , int mid , int high){
    vector <int> temp;
    int left = low;
    int right = high;
    while (left <= mid && right <= high){
        if (nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
         temp.push_back(nums[right]);
            right++; 
        }
    }
    while(left <= mid ){
       temp.push_back(nums[left]);
            left++;  
    }
    while(right <= high){
       temp.push_back(nums[right]);
            right++;  
    }
    for(int i = low ; i<= high ;i++){
        nums[i] = temp [i - low];
    }
}
void ms(vector <int >&nums , int low , int high){
    if (low == high) return ;
    int mid = (low + high ) / 2;
    ms(nums , low , mid);
    ms(nums , mid +1 , high);
    merge(nums , low , mid , high);
}
    vector<int> sortArray(vector<int>& nums, int n) {
        cin >> n ;
        cout << endl;
        for(int i = 0; i<n;i++){
            cin >> nums[i];
        }
      ms (nums , 0 , n-1)  ;
       for(int i = 0; i<n;i++){
            cout <<  nums[i];
        }
      return nums;
    }