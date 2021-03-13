#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll noZero(ll a)
{
    ll newNumber = 0;
    vector<int> vec;
    while (a > 0)
    {
        int tmp = a % 10;
        if (tmp != 0)
            vec.push_back(tmp);
        a = a / 10;
    }
    int b = vec.size();
    while (b--)
    {
        /* code */
        newNumber = newNumber * 10 + *vec.end();
        vec.pop_back();
    }
    return newNumber;
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