#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,m;
     cin>>n>>m;
     int arr[m];
     for (int i = 0; i < m; i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+m);
  
int minE = INT_MAX;
    for (int i = 0; i < m-n+1; i++)
    {
      
        int tmp = arr[i+n-1] - arr[i];
        minE = min(minE,tmp);
  
    }
    cout<<minE<<endl;
 }