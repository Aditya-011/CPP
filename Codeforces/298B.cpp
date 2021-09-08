#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x0,x1,y0,y1;
    vector<pair<char,long int>>dir;
    string s;
    cin>>n>>x0>>y0>>x1>>y1;
    cin>>s;
    if(x0<x1)
    dir.push_back(make_pair('E',x1-x0));
    else if(x0>x1)
    dir.push_back(make_pair('W',x0-x1));
    else if(x0==x1)
    dir.push_back(make_pair('Z',0));
      if(y0<y1)
    dir.push_back(make_pair('N',y1-y0));
    else if(y0>y1)
    dir.push_back(make_pair('S',y0-y1));
     else if(y0==y1)
    dir.push_back(make_pair('Z',0));
    

//cout<<dir[0].first<<" "<<dir[0].second<<endl;
//cout<<dir[1].first<<" "<<dir[1].second<<endl;
for (long int i = 0; i < s.size(); i++)
{
    if(s[i] == dir[0].first && dir[0].second!=0)
    dir[0].second--;
    else if(s[i] == dir[1].first && dir[1].second!=0)
    dir[1].second--;
    if(dir[0].second == 0 && dir[1].second==0)
    {
        cout<<i+1<<endl;
        return 0;
    }
}
cout<<-1<<endl;


}