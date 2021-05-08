#include <bits/stdc++.h>
using ll = unsigned long long;
using namespace std;
int countDigit(ll n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int result(ll n, vector<ll> ref)
{
    int a = ref.size();
    a--;
    int count = 0;

    while (n >= ref[0])
    {
        //////cout << "entered"
        //<< " ";
        // cout << "\n";
        if (n >= ref[a])
        {
            //cout << n << " - " << ref[a] << " = ";
            n = n - ref[a];
            //cout << n << " " << endl;
            // cout << "ok"
            //    << " ";
            count++;
        }
        else
        {

            //ref.pop_back();
            a--;
            //  cout << "popped"
            //    << " ";
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int digits = countDigit(n) - 4;
        // cout << countDigit(n) << " Afet";
        if (n >= 2050)
        {

            vector<ll> ref;

            while (digits >= 0)
            {
                ll tmp = 2050 * pow(10, digits);
                // cout << tmp << endl;
                ref.push_back(tmp);
                digits--;
            }
            sort(ref.begin(), ref.end());
            /*for (int a = 0; a < ref.size(); a++)
                cout << countDigit(ref[a]) << "\n";*/

            cout << result(n, ref) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
