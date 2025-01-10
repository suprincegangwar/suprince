// valid triangle
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first side : ";
    cin >> a;
    cout << "Enter the second side : ";
    cin >> b;
    cout << "Enter the third side : ";
    cin >> c;
    if ((a + b) > c and (b + c) > a and (c + a )> b)
    {
        cout << "valid triangle";
    }
    else
    {
        cout << "Invalid triangle";
    }
}