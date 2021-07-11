#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        vector<pair<long long,int>>arr;
        for (long long i = 0; i < n; i++)
        {
            long long tmp ;
            cin>>tmp;

            arr.push_back(make_pair(tmp,i+1));
        }
        long long count=0,maxSum = n+n-1;
        sort(arr.begin(),arr.end());
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < n; j++)
            {
            if((arr[i].first*arr[j].first)>=maxSum)
            {
                n = i+1;
                break;
            }
            else if((arr[i].first*arr[j].first)==(arr[i].second + arr[j].second))
            count++;
            }
            
        }
        
        
    }
    
}