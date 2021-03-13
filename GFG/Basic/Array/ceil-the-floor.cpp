// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends

pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    int floorDiff = INT_MAX, ceilDiff = INT_MAX, ceilInd = 0, floorInd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x && ceilDiff > (arr[i] - x))
        {
            ceilDiff = arr[i] - x;
            ceilInd = i;
        }
        if (arr[i] <= x && floorDiff > (x - arr[i]))
        {
            floorDiff = x - arr[i];
            floorInd = i;
        }
    }
    pair<int, int> pp = {-1, -1};
    if (floorDiff != INT_MAX)
    {
        pp.first = arr[floorInd];
    }
    if (ceilDiff != INT_MAX)
    {
        pp.second = arr[ceilInd];
    }
    return pp;
}