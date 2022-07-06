#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[left] > arr[largest])
    {
        swap(arr[largest], arr[left]);
        largest = left;
        heapify(arr, n, largest);
    }
    else if (right <= n && arr[right] > arr[largest])
    {
        swap(arr[largest], arr[right]);
        largest = right;
        heapify(arr, n, largest);
    }
}
class maxHeap
{
private:
    int arr[100];
    int size;

public:
    maxHeap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size++;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }
    void print()
    {
        for (int i = 1; i < size + 1; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "Empty" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;

        while (index <= size)
        {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            if (leftIndex < size && arr[leftIndex] > arr[index])
            {
                swap(arr[leftIndex], arr[index]);
                index = leftIndex;
            }
            else if (rightIndex < size && arr[rightIndex] > arr[index])
            {
                swap(arr[rightIndex], arr[index]);
                index = rightIndex;
            }
            else
                return;
        }
        return;
    }
};
void heapSort(int arr[], int n)
{
    int index = n;
    while (index >= 1)
    {
        swap(arr[1], arr[index]);
        index--;
        heapify(arr, n, 1);
    }
}
 void buildMinHeap(int arr[],int n,int i)
{
    // Write your code here 
   
     int smallest = i;
    int left  =  2 *i+1;
    int right = 2 * i +2;
    if(left < n && arr[left] < arr[smallest])
    {
        swap(arr[left] , arr[smallest]);
        smallest = left;
        heapify(arr,n,smallest);
    }
     else if(right < n && arr[right] < arr[smallest])
    {
        swap(arr[right] , arr[smallest]);
        smallest = right;
        heapify(arr,n,smallest);
    }
    else return;
    
}
int main()
{
    maxHeap hp;
    /*hp.insert(50);
     hp.insert(55);
      hp.insert(53);
       hp.insert(52);
       hp.insert(54);
       hp.remove();

       hp.print();*/
    int arr[] = {-1,9,3,2,6,7};
    int n = 5;
   /** for (int i = n / 2; i > 0; i--)
    {
        // heapify(arr,n,i);
        heapSort(arr, n);
    }*/
    for (int i = n/2; i >0; i--)
    {
        /* code */
        buildMinHeap(arr,n,i);
    }
    
   // buildMinHeap(arr,n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
};