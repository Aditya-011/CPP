#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int up = n*n;
    int j = up,k=1;
    for(int i=1;i<=n;i++)
    {
        int c1=0,c2=0;
        while(c1<n/2)
        {
            cout<<k<<" ";
            k++;
            c1++;
        }
         while(c2<n/2)
        {
            cout<<j<<" ";
            j--;
            c2++;
        }
       cout<<endl;
       
       
    }
}