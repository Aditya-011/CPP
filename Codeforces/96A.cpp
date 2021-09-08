#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() <= 6)
        cout << "NO";
    else
    {
        for (int i = 0; i < s.length()-6; i++)
        {
            int count = 1;
            for (int j = i; j < i + 7; j++)
            {
                if (s[j] != s[j + 1])
                {
                    break;
                }
                else
                    count++;
            }
            if (count == 7)
            {
                cout << "YES";
                return 0;
            }
          //cout<<count<<endl;
        }
        cout << "NO";
    }
}