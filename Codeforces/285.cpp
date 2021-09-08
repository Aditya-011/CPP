#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,k;
     cin>>n>>k;
     int arr[n];
     for (int i=0;i<n;i++)
     {
         arr[i]=i+1;
     }
     if(k!=0)
     swap(arr[k-1],arr[n-1]);
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;
     
 }