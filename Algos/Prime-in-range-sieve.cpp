#include <bits/stdc++.h>
using namespace std;
#define siz 10000
vector<int> getPrime(int n)
{
    vector<int> vec;
    int arr[siz] = {0};
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        for (int j = i * i; j < n; j = j + i)
        {
            /* code */
            arr[j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == 0)
            vec.push_back(i);
    }

    return vec;
}
int main()
{
    int n;
    cin >> n;
    vector<int> vec = getPrime(n);
    for (int i = 0; i < vec.size(); i++)
    {
        /* code */
        cout << vec[i] << " ";
    }
    return 0;
}