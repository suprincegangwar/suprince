#include <bits/stdc++.h>
using namespace std;
int main (){
     map < int,int > mpp; // first = key , second = value
     //map <int , pair <int,int>> mpp;
     //map <pair <int,int>, int> mpp;

     mpp [1] = 2;
     mpp.insert({3,1});
     mpp.insert({2,2});
     mpp.insert({4,7});
     //mpp[{5,2}] = 10;
     //sorted according to the key 
     for (auto it : mpp){
        cout<< it.first << " " << it.second <<endl;
     }
}