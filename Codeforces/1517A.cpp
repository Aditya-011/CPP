#include <bits/stdc++.h>
using ll = unsigned long long;
using namespace std;
int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int result(int n, vector<ll> ref)
{

    int count = 0;
    if (n < ref[ref.size() - 1])
    {
        // cout << "here"
        //<< " ";
    }
    while (n >= ref[0])
    {
        //////cout << "entered"
        //<< " ";
        if (n >= *(ref.end()))
        {
            n = n - *(ref.end());
            cout << n << " ";
            // cout << "ok"
            //    << " ";
            count++;
        }
        else
        {

            ref.pop_back();
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
        cout << countDigit(n) << " ";
        if (n >= 2050)
        {

            vector<ll> ref;

            while (digits >= 0)
            {
                ll tmp = 2050 * pow(10, digits);
                //cout<<digits<<endl;
                ref.push_back(tmp);
                digits--;
            }
            sort(ref.begin(), ref.end());
            /* for (int a = 0; a < ref.size(); a++)
                cout << countDigit(ref[a]) << " ";
*/
            cout << result(n, ref);
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
