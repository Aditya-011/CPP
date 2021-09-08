#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[s.length()];
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1')
        {
            
            if(s[i+1]=='4')
            {
                i++;
                if(s[i+1]=='4')
            {
                i++;
            }
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
}