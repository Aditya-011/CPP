#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   long long int a,b;
   cin>>a>>b;
      if(a==b)
   cout<<0<<endl;
      else{
        if((a%10)==(b%10))
        {long long int temp =abs(a-b)/10;

       cout<<temp<<endl;}
       else
       {
         long long int temp =abs(a-b)/10;
       temp++;
       cout<<temp<<endl;
       }

 }
}
}
