#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int,string> myMap;

    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    auto it = myMap.find(2);

    if (it != myMap.end()) {
        cout << "Key 2 found with value: " << it->second << endl;
    } else {
        cout << "Key 2 not found!" << endl;
    }

    it = myMap.find(4);
    if (it != myMap.end()) {
        cout << "Key 4 found with value: " << it->second << endl;
    } else {
        cout << "Key 4 not found!" <<endl;
    }

    return 0;
}
