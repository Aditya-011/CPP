#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,max_def,max_num=0,i,min_total=0,max_total=0;
    scanf("%lld",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    if(a[0]==a[n-1])
    {
        if(n%2==0)
            max_num=(n/2*(n-1));
        else
            max_num=(n/2*n);
    }
    else
    {
        for(i=0; i<n; i++)
        {

            if(a[i]==a[0])
                min_total++;
            if(a[i]==a[n-1])
                max_total++;
        }
        max_num=min_total*max_total;

    }
    max_def=a[n-1]-a[0];
    printf("%lld %lld\n",max_def,max_num);
    return 0;
}