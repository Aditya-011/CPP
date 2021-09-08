#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int arr[a.length()];
    for (int i = 0; i < a.length(); i++)
    {
        int tmp, cmp;
        tmp = (int)a[i];
        cmp = (int)b[i];
        arr[i] = cmp^tmp;
    }
    for (int i = 0; i < a.length(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}