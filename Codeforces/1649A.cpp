#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int  i = 0,j=n-1,sum=0;
       
       while (i<n && arr[i]!=0)

       {
           i++;
       }
       while (j>=0 && arr[j]!=0   )
       {j--;
       }
       
       if(j<i)
       {
           cout<<0<<endl;
       }
      else
      {
          cout<<j-i+2<<endl;
      }
    }
}