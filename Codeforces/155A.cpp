#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0, minT = INT_MAX, maxT = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    minT = a[0];
    maxT = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxT)
        {
            count++;
            maxT = a[i];
        }
        if (a[i] < minT)
        {
            {
                count++;
                minT = a[i];
            }
        }
    }
    cout << count;
}