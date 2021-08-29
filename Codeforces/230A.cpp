#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int s,n;
     cin>>s>>n;
     vector<pair<int,int>>vec;
     for (int i = 0; i < n; i++)
     {
         int a,b;
         cin>>a>>b;
         vec.push_back(make_pair(a,b));
     }
     sort(vec.begin(),vec.end());
    
     
     for (int i = 0; i < n; i++)
     {
         if(s<=vec[i].first)
        {
            cout<<"NO"<<endl;
            return 0;}
            else
            s+=vec[i].second;


     }
     cout<<"YES"<<endl;
     
     
 }