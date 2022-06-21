// C++ program for optimal allocation of pages
#include <bits/stdc++.h>
using namespace std;
int solve(string str)
{
     if(str.length()%2 == 1)
        return -1;
    int count  =0,res =0;
    stack<char>st;
    for(int  i=0;i<str.size();i++)
    {
        if(str[i] == '{')
            st.push(str[i]);
        else
        {
            if(!st.empty())
                st.pop();
            else
                count++;
        }
    }
    if((count + st.size())%2 == 1)
        return -1;
    else
    {
        res += (count/2) + (count%2) + (st.size()/2) + (st.size()%2);
    }
    return res;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string s;
    cin>>s;
    cout<<solve(s)<<endl;
    }
}