#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]= i+1;
    }
    if(n%2==0)
    {
for (int i = 0; i < n-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }}
      else
    {
      arr[0]=3;
      arr[1]=1;
      arr[2]=2;
      for(int i=3;i<n-1;i+=2)
        swap(arr[i],arr[i+1]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    }

    
}