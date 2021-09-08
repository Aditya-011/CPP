#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2==1)
    {
for (int i = 0; i < n; i++)
{
    if(arr[i]%2==1)
    count++;
}

    }
    else
    {
        for (int i = 0; i < n; i++)
{
    if(arr[i]%2==0)
    count++;
}
    }
    cout<<count<<endl;
}