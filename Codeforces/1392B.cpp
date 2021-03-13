#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int arr[],int n)
{
	int maxi = INT_MIN;
	for(int i=0;i<n; i++)
	maxi = max(maxi,arr[i]);
		for(int i=0; i<n;i++)
		{
			
			arr[i] = maxi - arr[i];
		}	
}
int main()
{
	int t;
    ll n,k;
    cin>>t;
    while(t--){
        ll d = -1000000000;
        cin>>n>>k;
        ll a[n],b[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
            d = max(d,a[i]);
        }
        for(ll i=0; i<n; i++){
            a[i] = d - a[i];
            b[i] = a[i];
        }
        if(k % 2 == 1){
            for(ll i=0; i<n; i++){
                cout<<a[i]<<" ";
            }cout<<endl;
        }
        else{
            sort(b,b+n,greater<ll>());
            d = b[0];
            for(ll i=0; i<n; i++){
                a[i] = d - a[i];
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }


    }

}
