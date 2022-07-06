#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
      string s;
      cin>>s;
        vector<int> one, zero;
        for (int i = 0; i < n; i++)
        {
            
            if (s[i]-'0' == 0)
            {

                zero.push_back(0);
            }
            else
            {
                one.push_back(1);
            }
        }
      //cout<<one.size()<<endl;
        if(one.size()==zero.size())
        {
            cout<<2*one.size()<<endl;
        }
       
        else
        cout<<2*min(one.size(),zero.size())+1<<endl;
        
    }
}