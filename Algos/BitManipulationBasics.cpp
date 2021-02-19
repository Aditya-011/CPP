#include <bits/stdc++.h>
using namespace std;
bool getBit(int n, int pos)
{
    if ((n & (1 << pos)) != 0)
        return 1;
    else
        return 0;
}
int setBit(int n, int pos)
{
    return n | (1 << pos);
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return mask & n;
}
int updateBit(int n, int pos)
{
    n = clearBit(n, pos);
    return n | (1 << pos);
}
int main()
{
    int n, pos;
    cin >> n >> pos;
    //cout<<getBit(n,pos);
    //cout<<setBit(n, pos);
    //cout<<clearBit(n,pos);
    cout << updateBit(n, pos);
}