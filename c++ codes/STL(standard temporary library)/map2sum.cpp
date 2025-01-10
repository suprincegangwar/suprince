#include <bits/stdc++.h>
using namespace std;
    vector<int> twosum(vector<int>&nums, int target){
        unordered_map<int ,int > map;
        for(int i = 0; i< nums.size();++i){
            int num = nums[i];
            int complement = target - num;
            auto it = map.find(complement);
            if(it != map.end()){
                return{it->second , i};
            }
            map[num] = i;
        }
        return{};
    }
