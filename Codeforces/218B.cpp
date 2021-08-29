#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int a=n,b=n;
    int arr[m],brr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    int minE=0,maxE=0;
    while(a>0)
    {
        for (int i = 0; i < m; i++)
        {
            sort(arr,arr+m,greater<int>());
            maxE += arr[0];
            arr[0]--;
            a--;
            if(a<1)
            break;
        }
        
    }
    int i=0;
    sort(brr,brr+m);
    while(b>0)
    {
if(brr[i]==0)
i++;
minE+=brr[i];
brr[i]--;
b--;
    }
    cout<<maxE<<" "<<minE<<endl;

}