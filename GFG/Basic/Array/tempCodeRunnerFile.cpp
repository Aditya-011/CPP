oid sort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
/*You are required to complete the function*/
long long findMaxProduct(int A[], int n, int k)
{
//Your code here
sort(A,n);
long long pro = 1;
for (int i = n; i < n-k-1; i--)
{
    /* code */
    pro = pro * A[i];
}
return pro;


}

