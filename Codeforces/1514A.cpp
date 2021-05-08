#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
    int a = sqrt(n);
    if (n == 1)
        return 1;
    else if (n != a * a)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool flag = 0;
        cin >> n;
        int arr[n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            flag = check(arr[i]);
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
