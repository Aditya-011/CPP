#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll first = 0, second = 0;
		scanf("%d",&n);
		for(int i=0; i<=n; i++)
		{
			ll temp;
			scanf("%lld",&temp);
			if(i % 2 == 0)
			{
				if(i == 2)
				{
					second += temp;
					i++;
				continue;
				}
				first += temp;
			}
			else
			{
				second += temp;
			}
		}
		//cout<<first<<" "<<second;
		if(first > second)
		cout<<"First"<<endl;
		else if(second > first)
		cout<<"Second"<<endl;
		else
		cout<<"Draw"<<endl;
	}
}
	

