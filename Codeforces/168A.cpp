#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,x,y;
    cin>>n>>x>>y;
    int count=0;
float limit = (y*n)/100;
//cout<<limit<<endl;
    while(x<limit)
    {
        x++;
        count++;
    }
    cout<<count<<endl;
}