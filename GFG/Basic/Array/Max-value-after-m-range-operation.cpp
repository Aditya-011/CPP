#include <bits/stdc++.h>
using namespace std;
void increment(int arr[], int a, int b, int c)
{
    for (int i = a; i <= b; i++)
    {
        arr[i] = arr[i] + c;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n] = {0};
        while (m--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            increment(arr, a, b, c);
        }
        sort(arr, arr + n);
        cout << arr[n - 1] << endl;
    }
    return 0;
}