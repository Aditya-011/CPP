#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
		{
			string s,s1;
			cin>>s;
			vector<pair<char,int>> arr,brr;
			for(int i=0;i<s.length();i++)
				{
					arr.push_back(make_pair(s[i],i));
				}
			cin>>s1;
			for(int i=0;i<s1.length();i++)
				{
					//cout<<<<endl;
				brr.push_back(make_pair(s1[i],abs(find(s.begin(),s.end(),s1[i]) - s.begin())));
					//cout<<*(find(s.begin(),s.end(),s1[i]) )<<endl;
				}
			
			int sum=0;
			for(int i=1;i<brr.size();i++)
				{
					sum+= abs(brr[i].second - brr[i-1].second);
				}
			cout<<sum<<endl;
		}
	
}