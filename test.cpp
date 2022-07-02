// C++ program for optimal allocation of pages
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],x=0,res=-1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
       
        for (int i = 0; i < n; i++)
        {
           x += arr[i];
        }
        int l=0,r=n-1,co=0;;
          while (l<=r&& x>=k)
        
        {
            /* code */
            if(x-arr[l]>=k)
            {
                co++;
                 x = x-arr[l];
            l++;
           
            }
          //  else break;
            if(x-arr[r]>=k)
            {
                co++;
                 x=x-arr[r];
                r--;
               
            }
            else break;
        }
      
          cout<<r-l+1<<arr[l]<<arr[r]<<endl<<co;      
       
    }
}