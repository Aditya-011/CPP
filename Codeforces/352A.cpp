#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count5 = 0, count0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 5)
            count5++;
        else
            count0++;
    }
    if (count0 > 0)
    {
        int q = count5 / 9;
        vector<int> vec;
        for (int i = 0; i < q * 9; i++)
        {
            vec.push_back(5);
        }
        for (int i = 0; i < count0; i++)
        {
            vec.push_back(0);
        }
        if (q < 1)
        {
            cout << 0;
        }
        else
        {
            for (int i = 0; i < vec.size(); i++)
            {
                cout << vec[i];
            }
        }
    }
    else
        cout << -1;
}