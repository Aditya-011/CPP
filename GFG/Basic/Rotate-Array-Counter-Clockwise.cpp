#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n, int d)
{
    int j = (d - 1);
    for (int i = 0; i < d; i++)
    {

        if (i >= j)
            break;
        swap(arr[i], arr[j]);
        j--;
    }
    int k = n - 1;
    for (int i = d; i < n; i++)
    {

        if (i >= k)
            break;
        swap(arr[i], arr[k]);

        k--;
    }
    reverse(arr, arr + n);
}
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotate(arr, n, a);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}