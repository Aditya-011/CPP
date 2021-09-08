#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }
    int count = 0, sum = 0;
    sort(arr, arr + 12, greater<int>());
    for (int i = 0; i < 12 && sum < k; i++)
    {
        sum += arr[i];
        count++;
    }
   if(sum<k)
   cout<<-1;
   else
    cout << count;
}