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
        // 001 010 011 100 101 110 111
        int power = log2(n)+1;
        cout<<n-power<<endl;
       
            
    }
}