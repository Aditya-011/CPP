#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;

        cin >> n;
        int arr[n];
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
            if (arr[i] > 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }

        int loop = max(pos.size(), neg.size());
        for (int i = 0; i < loop; i++)
        {
            cout << pos[i] << " " << neg[i] << " ";
        }
        cout << endl;
    }
}