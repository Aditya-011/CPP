#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
 cin>>t;
 while (t--)
 {
     int n;
     cin>>n;
     int oddSum=0,evenSum=0;
     if(n%2==0)
     {
oddSum = (1+n-1)/2*(n/2);
evenSum = (2+n)/2*(n/2);
     }
     else
     {
         oddSum =  (1+n)/2*(n/2+1);
         evenSum = (2+n-1)*(n/2);
     }
     cout<<evenSum-oddSum<<endl;
 }
 
}