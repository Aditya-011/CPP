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
    int a =  360/(180-n);
    if(n == 180*(a-2)/a)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

}