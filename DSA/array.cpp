#include <bits/stdc++.h>
using namespace std;

void array_reversal(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void array_rotation_reversal_algo()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    array_reversal(arr, 0, d - 1);
    array_reversal(arr, d, n - 1);
    array_reversal(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    array_rotation_reversal_algo();
}