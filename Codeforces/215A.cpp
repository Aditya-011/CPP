#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int q = brr[j] / arr[i];
            if (brr[j] == q * arr[i])
                vec.push_back(brr[j] / arr[i]);
        }
    }
    int maxE = *max_element(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), greater<int>());
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == maxE)
            count++;
    }
    cout << count;
}