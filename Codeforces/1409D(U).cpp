#include <bits/stdc++.h>
using namespace std;
void incrementVector(vector<int> &a)
{
    int n = a.size();

    // Add 1 to last digit and find carry
    a[n-1] += 1;
    int carry = a[n-1]/10;
    a[n-1] = a[n-1] % 10;

    // Traverse from second last digit
    for (int i=n-2; i>=0; i--)
    {
        if (carry == 1)
        {
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i] % 10;
        }
    }

    // If carry is 1, we need to add
    // a 1 at the beginning of vector
    if (carry == 1)
      a.insert(a.begin(), 1);
}
int main()
{
int t;
cin>>t;
	while(t--)
  {
  vector<int> vect;
  int sum=0;
  int s;
  string a;
  cin>>a>>s;
  for(int i=0;i<a.length();i++)
 {
   int temp = a[i];
   vect.push_back(temp);}

  while(sum!=s)
  {
  incrementVector(vect);

    for(int i=0;i<n;i++)
    sum=sum+vect[i];
  }
  for(int i=0;i<vect.size();i++)
  cout<<vect[i];
  cout<<endl;


}
}
