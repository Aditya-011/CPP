#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void permute(int a[], int k, int m)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = k; i < m; i++)
        {
            /*int tmp = a[k];
            a[k] = a[i];
            a[i] = tmp;*/
            swap(a[k], a[i]);
            permute(a, k + 1, m);
            swap(a[k], a[i]);
            /* tmp = a[k];
            a[k] = a[i];
            a[i] = tmp;*/
        }
    }
}

int main()
{
    cout << "Enter the length of the password : ";
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        //  generates random number between 1 to 10
        a[i] = rand() % 10;
    }
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << ", ";
    }
    cout << "The Passwords are : ";
    permute(a, 0, m);
}