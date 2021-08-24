#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int minE = min(n,m);
    for (int i = 0; i <= minE; i++)
    {
        for (int j = 0; j <= minE; j++)
        {
           if(i*i + j == n && j*j + i ==m)
           count++;
        }
        
    }
    cout<<count;
    
}