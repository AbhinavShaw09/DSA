#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n)
{
  for(int i=0;i<n-1;++i)
  {
    int min = i;
    for(int j=i+1;j<n;++j)
    {
      if(arr[j]<arr[min])
      {
        min = j;
      }
    }
    swap(arr[i],arr[min]);
  }
}

int main()
{
  int arr[] = {3, 5, 8, 4, 1, 9, -2 };
  int n = sizeof(arr)/sizeof(arr[0]);
  InsertionSort(arr,n);
  for(int i=0;i<n;++i) cout<<arr[i]<<' ';
  return 0;
}
