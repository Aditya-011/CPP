#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int x)
{
    int s = 0, e = n;
    while (s <= e)
    {
        /* code */
        int mid = (s + e) / 2;

        if (a[mid == x])
            return mid;
        else if (a[mid] > x)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    sort(a, a + n);
    cout << binarySearch(a, n, x);
}