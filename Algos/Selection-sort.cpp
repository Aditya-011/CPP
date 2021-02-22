#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        for (int j = i; j < n; j++)
        {
            /* code */
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
}