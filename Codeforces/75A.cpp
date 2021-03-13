#include <bits/stdc++.h>
using namespace std;
#define ll long long
// new
ll noZero(ll a)
{
    ll num = 0;
    vector<int> vec;
    while (a > 0)
    {
        int tmp = a % 10;
        if (tmp != 0)
            vec.push_back(tmp);
        a = a / 10;
    }
    //int b = vec.size();
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        /* code */
        num = num * 10 + vec[i];
    }

    // cout << num << endl;
    return num;
}
int main()
{
    ll a, b, numA, numB;
    cin >> a >> b;
    ll sum = a + b;
    numA = noZero(a);
    numB = noZero(b);
    if ((numA + numB) == noZero(a + b))
        cout << "YES";
    else
        cout << "NO";
}