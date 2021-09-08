#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int xsum = 0, ysum = 0, zsum = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp1, tmp2, tmp3;
        cin >> tmp1 >> tmp2 >> tmp3;
        xsum += tmp1;
        ysum += tmp2;
        zsum += tmp3;
    }
    if (xsum != 0 || ysum != 0 || zsum != 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";
}