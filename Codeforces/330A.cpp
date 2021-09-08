#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, count = 0;
    cin >> r >> c;
    char arr[r][c];
    vector<int> ivec, jvec;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
                ivec.push_back(i);
            jvec.push_back(j);
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (binary_search(ivec.begin(), ivec.end(), i))
            continue;
        for (int j = 0; j < c; j++)
        {
            if (binary_search(jvec.begin(), jvec.end(), j))
                continue;
            count++;
        }
    }
    for (int  i = 0; i < ivec.size(); i++)
    {
        cout<<ivec[i]<<" "<<jvec[i]<<endl;
    }
    
    cout<<count<<endl;
}