//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int k)
{
  for(int i=0;i<n;i++)
  {
    if(arr[i] == k)
    return i;
  }
  return -1;
}

int binarySearch(int arr[],int n,int k)
{
  int s=0,e=n;
  while(s<=e)
  {
    int mid = ((e-s)/2) + s;
    if(arr[mid] == k)
    return mid;
    else if(arr[mid] > k)
    {
      e = mid-1;
    }
    else 
    {
      s=mid+1;
    }
  }
  return -1;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int k;
  cin>>k;
 // cout<<"Linear Search : "<<linearSearch(arr,n,k)<<"\n";
  cout<<"Binary Search : "<<binarySearch(arr,n,k)<<"\n";
}