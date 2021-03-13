#include <bits/stdc++.h>
using namespace std;
#define siz 100000
int a[siz] = {0};
vector<int> factorization(int n)
{

    vector<int> vec;
    // vec.push_back(1);
    for (int i = 2; i < siz; i++)
    {
        /* code */
        a[i] = i;
    }
    for (int i = 2; i < siz; i += 2)
    {
        /* code */
        a[i] = 2;
    }
    for (int i = 3; i < siz; i++)
    {
        /* code */
        if (a[i] == i)
        {
            for (int j = i * i; j < siz; j++)
            {
                /* code */
                if (a[j] == j)
                    a[j] = i;
            }
        }
    }
    while (n != 1)
    {
        /* code */
        vec.push_back(a[n]);
        n /= a[n];
    }
    return vec;
}
int main()
{
    int n;
    cin >> n;

    vector<int> vec = factorization(n);
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec[i] << " ";
    }
    return 0;
}