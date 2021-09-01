#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=10 ||n>21)
    {
        cout<<0<<endl;
        return 0;
    }
    if(n-10>=1 && n-10<=11)
    {
        if(n-10 ==10)
        {
            cout<<15<<endl;
            return 0;
        }
        else
        cout<<4<<endl;
    }
  
}