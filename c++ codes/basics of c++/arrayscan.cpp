#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the no." << i + 1 << " ";
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << endl
             << arr[i];
    }
    return 0;
}