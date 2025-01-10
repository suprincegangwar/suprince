#include<bits/stdc++.h>
using namespace std;
struct Node {
    public :
    int data;
    Node* next;

    public:
    Node(int data1, Node*next1){
        data = data1;
        next = next1;
    }
};
 int main (){
    vector <int> A ={3,4,5,6,7};
   Node* y = new Node (A[0],nullptr);
   // cout << y;
   // Node y =  Node (A[3],nullptr);
    cout << y->data;
 }