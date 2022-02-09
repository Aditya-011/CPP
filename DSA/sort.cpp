#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
     //swap the minimum element in the array with first element
  for(int i =0 ; i<n-1; i++)
  {
    for(int j=i+1;j<n;j++)
    {
    if(arr[j]<arr[i])
    swap(arr[j],arr[i]);
    }
  }
}
void bubbleSort(int arr[],int n)
{
//swap the adjacent elements if in wrong order 
  // each iteration brings largest element to last position
  for(int i =0 ; i<n-1; i++)
  {
    for(int j=0;j<n-1-i;j++)
    {
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
    }
  }
}
void insertionSort(int arr[],int n)
{
   int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //selectionSort(arr,n);
    //bubbleSort(arr,n);
    insertionSort(arr,n);
      for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}