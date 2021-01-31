// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends

void rotate(int arr[], int n)
{
    int temp, brr[n];
    brr[0] = arr[(n - 1)];
    for (int i = 1; i < n; i++)
    {
        brr[i] = arr[(i - 1)];
    }

    for (int i = 0; i < n; i++)
        arr[i] = brr[i];
}