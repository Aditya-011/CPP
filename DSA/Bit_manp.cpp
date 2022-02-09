#include<bits/stdc++.h>
using namespace std;
void getBit()
{
    int n=5;
 if( n & (1<<2))
 cout<<1;
 else
 cout<<0;
}
void setBit()
{
    int n=5;
  n =  n | (1<<1);
    cout<<n;
}
void clearBit()
{
    int n=5;
    int m = 1<<2;
    m = ~m;
    n = m&n;
    cout<<n;
}
void updateBit()
{
    int n=5;
     // updatebit is clearbit + set bit
     
}
int main()
{
 //setBit();
 clearBit();
}