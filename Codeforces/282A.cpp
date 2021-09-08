#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    vector<string>vec;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin>>tmp;
        vec.push_back(tmp);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            if(vec[i][j] =='+')
            {
                x++;
                break;
            }
            else if(vec[i][j]=='-')
            {
                x--;
                break;
            }

        }
        
    }
    cout<<x<<endl;
    
}