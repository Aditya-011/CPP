#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      ll a[n],b[n];
      ll mina = INT_MAX;
      ll minb = INT_MAX;
      for(int i=0;i<n;i++)
      {
      	cin>>a[i];
      	if(mina>a[i])
      	mina = a[i];
	  }
      for(int i=0;i<n;i++)
      {
      	cin>>b[i];
      	if(minb>b[i])
      	minb=b[i];
	  }
      ll count=0;
      
      //Time Cosuming but correct
      /*
      for(int i= 0; i<n;i++)
    {
      while(a[i]!=mina || b[i]!=minb)
      {
        if(a[i]!=mina)
        a[i]--;
        if(b[i]!=minb)
        b[i]--;
       // cout<<i<<" "<<1<<endl;
        count++;
      }
    }*/
    for(int i=0;i<n;i++)
    {
    	ll aa,bb;
    	aa = a[i] - mina;
    	bb = b[i] - minb;
    	ll sum = 0;
    	sum= min(aa,bb) + (max(aa,bb) - min(aa,bb));
    	count += sum;
	}
    cout<<count<<endl;
  }
}
