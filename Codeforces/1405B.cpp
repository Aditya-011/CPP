#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 
      ll n;
      cin>>n;
      ll arr[n];
      for(ll i=0;i<n;i++)
        cin>>arr[i];
     ll ans=INT_MIN;
      ll sum=0;
      for(ll i=n-1;i>=0;i--)
      {
          sum+=arr[i];
          ans=max(ans,sum);
      }
      cout<<ans<<endl;
 
    }
    return 0;
}
