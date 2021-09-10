#include <bits/stdc++.h>
using namespace std;
bool check(int arr[],int brr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!= brr[i])
        return 0;
    }
    return 1;
    
}
void even(int arr[],int n)
{
    for (int i = 1; i < n; i+=2)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    
}
void odd(int arr[],int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }
        sort(brr,brr+n);
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(check(arr,brr,n))
            break;
            count++;
            if((i+1)%2==0)
            even(arr,n);
            else 
            odd(arr,n);
            
        }
        cout<<count<<endl;
    }
}