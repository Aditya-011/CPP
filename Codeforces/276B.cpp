#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> se;
    vector<pair<char, int>> vec;
    int z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        se.insert(s[z]);
        z++;
    }

    for (auto i = se.begin(); i != se.end(); i++)
    {
        vec.push_back(make_pair(*i, 0));
    }
    sort(s.begin(), s.end());
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (vec[j].first == s[i])
            vec[j].second++;
        if (s[i] != s[i + 1])
            j++;
    }
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i].second % 2 != 0)
            sum += vec[i].second;
    }
    //cout<<sum<<endl;
    if (sum == 0)
    {
        cout << "First\n";
    }
    else if (sum % 2 == 0)
    {
        cout << "Second\n";
        //cout<<s.size()-sum<<endl;
    }
    else
    {
        cout << "First\n"; //cout<<s.size()-sum<<endl;
    }
}