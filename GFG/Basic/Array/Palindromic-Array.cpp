// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PalinArray(a, n) << endl;
    }
} // } Driver Code Ends

int checker(int n)
{
    int abc = 0, c = n;
    while (c != 0)
    {
        int tmp = c % 10;
        abc = (abc * 10) + tmp;
        c = c / 10;
    }
    if (n == abc)
        return 1;
    else
        return 0;
}
/*Complete the function below*/
int PalinArray(int a[], int n)
{ //add code here
    int flag;
    for (int i = 0; i < n; i++)
    {
        flag = checker(a[i]);
        if (!flag)
            return 0;
    }
    if (flag)
        return 1;
    else
        return 0;
}