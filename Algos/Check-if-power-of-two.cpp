#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    return (n && !(n & n - 1));
}
int main()
{

    int n;
    cin >> n;
    cout << check(n);
}