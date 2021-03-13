// { Driver Code Starts
//Initial Template for C

#include <stdio.h>

// } Driver Code Ends

//User function Template for C

long long int factorial(int N)
{
    //code here
    long long pro = 1;
    if (N == 1 || N == 0)
        return pro;
    for (int i = 2; i <= N; i++)
    {
        /* code */
        pro = pro * i;
    }
    return pro;
}

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N;
        scanf("%d", &N);
        printf("%lld\n", factorial(N));
    }
    return 0;
} // } Driver Code Ends