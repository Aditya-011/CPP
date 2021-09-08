#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> a >> b >> c >> n;
        int sum = 6;
        vector<int> arr;
        arr.push_back(1);
        arr.push_back(3);
        arr.push_back(2);
        while ((n - 3)--)
        {
            arr.push_back(sum);
        }
    }
    //code
    return 0;
}