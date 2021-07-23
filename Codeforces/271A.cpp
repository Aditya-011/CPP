#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        int temp;
        temp = n % 10;
        s.insert(temp);
        n = n / 10;
    }
    if (s.size() == 4)
        return true;
    else
        return false;
}
int main()
{
    int n, a;
    cin >> n;
    while (a != 1)
    {
        n++;
        a = check(n);
    }
    cout << n;
}