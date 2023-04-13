#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
  for(int i=1;i<n;++i)
  {
    int j = i;
    int value = arr[i];
    while(j>0 and arr[j-1] > value)
    {
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = value;
  }
}

int main()
{
  int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
  int n = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr,n);
  for(int i=0;i<n;++i) cout<<arr[i]<<" ";
  return 0;
}

//Time Complexity: O(n^2)
//Space Complexity: O(1)

/*
        <--Tracing-->
        
  1:  3 8 5 4 1 9 -2
        ~
  2:   3 8 5 4 1 9 -2
           ~
  3:   3 5 8 4 1 9 -2
             ~
  4:   3 4 5 8 1 9 -2
               ~
  5:   1 3 4 5 8  9 -2
                  ~
  6:   -2 1 3 4 5 8  9 
                     ~
                     
*/

/*
        Recursive Implementation

    void insertionSort(int arr[],int i,int n)
    {
      int j = i;
      int value = arr[i];
      while(j>0 and arr[j-1] > value)
      {
        arr[j] = arr[j-1];
        j--;
      }
        arr[j] = value;
        if(i<n) insertionSort(arr,i+1,n);
      }
    }

*/

