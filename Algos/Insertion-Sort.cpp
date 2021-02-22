#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = a[i], j = i - 1;
        /* code */
        while (a[j] > curr && j >= 0)
        {
            /* code */
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = curr;
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
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
}