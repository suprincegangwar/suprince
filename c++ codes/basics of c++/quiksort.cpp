#include <bits/stdc++.h>
using namespace std;
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (A[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (A[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(A[i], A[j]);
        }
    }
    swap(A[j], A[low]);
    return j;
}
void sort(int A[], int low, int high)
{
    if (low < high)
    {
        int pindex = partition(A, low, high);
        sort(A, low, pindex - 1);
        sort(A, pindex + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter the no of elements :";
    cin >> n;
    int A[n];
    cout << "Enter the unsorted array :";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A, 0, n - 1);
    cout << "sorted array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}