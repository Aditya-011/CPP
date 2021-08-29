#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b = "hello";
    cin>>a;
    int j=0;
    for (int i = 0; i < a.length(); i++)
    {
       if(a[i]==b[j])
       j++;
       if(j==b.length())
       {
           cout<<"YES\n";
           return 0;
       }
    }
    cout<<"NO\n";
    
}