#include<bits/stdc++.h>
using namespace std;

void OneSwap(int arr[],int n)
{
  int i=-1,j=-1;
  for(int k=1;k<n;++k)
  {
    if(arr[k-1]>arr[k])
    {
      if(i==-1)
      {
        i = k-1;
        j=k;//adjacent element swap
      }
      else
      {
        j = k; 
      }
    }
  }
  swap(arr[i],arr[j]);
}

int main()
{
  int arr[] = {3, 5, 7, 6, 8, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  OneSwap(arr,n);
  for(int i=0;i<n;++i) cout<<arr[i]<<" ";
  return 0;
}
