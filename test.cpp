#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     cin>>n;
	     string digit;
	     cin>>digit;
	     int temp=(int)digit[0]-48;
	     if(temp==9)
	     {
	          for(int i=n-1;i>=0;i--)
	          {
	              if((char)digit[i]>49)
	              {
	                    digit[i]=(char)(2+48);
	                    digit[i-1]=(char)((int)digit[i-1]-1);
	              }
	              else
	              {
	                   digit[i]=(char)(1+48-(int)digit[i]+48);
	              }
	          }
	     }
	     else
	     {
	          for(int i=0;i<n;i++)
	          {
	               digit[i]=(char)(57-(int)digit[i] + 48);
	          }
	     }
	     for(int i=0;i<n;i++)
	          cout<<digit[i];
	     cout<<endl;

	}
	return 0;
}