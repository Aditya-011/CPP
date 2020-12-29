#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    ll a0,a1,a2,b0,b1,b2;
    cin>>a0>>a1>>a2;
          cin>>b0>>b1>>b2;
          ll a1b0 = 0,a0b2 = 0,a2b1 = 0,ans = 0;
          a1b0 = min(a1,b0);
          a1 -= a1b0;
          b0 -= a1b0;

          a0b2 = min(a0,b2);
          a0 -= a0b2;
          b2 -= a0b2;

          a2b1 = min(a2,b1);
          a2 -= a2b1;
          b1 -= a2b1;

          ans += a2b1 * 2;
          ans -= 2 * min(a1,b2);
          cout<<ans<<endl;
  }
}
