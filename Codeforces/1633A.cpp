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
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            int ans =-1;
            for(int i=0;i<10;i++)
            {
                
                 if( (n - n % 10 + i) % 7 == 0)
                {ans = n - n % 10 + i;}
            }
            cout<<ans<<endl;
        }
    }
    
}