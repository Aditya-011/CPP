#include <bits/stdc++.h>
using namespace std;
void solve2()
{
    int n;
    cin >> n;
    vector<pair<char, int>> q;

    for (int i = 0; i < n; i++)
    {
        char tmp;
        cin >> tmp;
        q.push_back(make_pair(tmp, i));
    }
    sort(q.begin(), q.end());
    /* (int i = 0; i < n; i++)
    {
        cout << q[i].first << " " << q[i].second << endl;
    }*/
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int flag = 0;
            if (q[j].first == q[j + 1].first)
            {
                flag++;
            }
            if (q[j].first == q[j + 1].first && q[j].second != (q[j + 1].second) - 1)
            //  cout << q[j].second << "wrong\n";
            {
                cout << "NO\n";
                return;
            }
            i += flag;
        }
    }
    cout << "YES\n";
    return;
}
void solve()
{
    int n;
    cin >> n;
    char q[n];
    set<char> c1;
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
        c1.insert(q[i]);
    }
    int times = c1.size();
    int nxt = 0;
    while (times--)
    {
        int flag = 0;
        /*cout << "Entered \n"
             << nxt << endl;*/
        for (int i = nxt + 1; i < n; i++)
        {

            if (q[nxt] == q[i])
            {
                flag++;
                //cout << q[nxt] << " Matched " << q[i] << "\n";
                if (abs(i - flag) == 0)
                {

                    //cout << i << " - " << flag << " = " << abs(i - flag) << " ";
                    //nxt++;
                    // cout << "next \n";
                }
                else
                {
                    cout << "NO\n";
                    //break;
                    return;
                }
            }
            /* else
                cout << q[nxt] << " mismatched " << q[i] << endl;*/
        }
        nxt += flag;
    }
    cout << "YES\n";
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve2();
    }
}