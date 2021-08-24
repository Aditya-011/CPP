#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    set<string>s;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
int count0=0,count1=0;
for (int i = 0; i < n; i++)
{
    if(arr[i] == *s.begin())
    {
        count0++;
    }
    else
    count1++;
}
if(count0>count1)
cout<<*s.begin();
else
cout<<*s.rbegin();
}