#include<bits/stdc++.h>
using namespace std;
void fun(int x,int arr[])
{
    if(x==0)
    {
        return;
    }
    else
    {
		swap(arr[x],arr[x-1]);
        fun(x-1,arr);
        
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    fun(n-1,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}