#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<int> s;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			s.insert(temp);
		}
		if(s.size() == 1)
		cout<<n<<endl;
		else
		cout<<1<<endl;
	}
}
