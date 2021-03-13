#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int>p;
    for (int i = 0; i < n; i++)
    {
        p.push(arr[i]);
    }
    
    while (q--)
    {
        int a,b;
        cin>>a>>b;
        
        
        if(a==1)
        {
            arr[b] = 1- arr[b];
        }
        else if( a == 2)
        {
            sort(arr,arr+n);
            cout<<arr[n-b]<<endl;
        }

    }
    
}