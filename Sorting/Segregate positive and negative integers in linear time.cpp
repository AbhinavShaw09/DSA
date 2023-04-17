#include<bits/stdc++.h>
using namespace std;

void Segregate(int arr[],int n)
{
  int i=0,j=0;
  for(int i=0;i<n;++i)
  {
    if(arr[i]<0)
    {
      swap(arr[i],arr[j++]);
    }
  }
  for(int i=0;i<n;++i) cout<<arr[i]<<" ";
}

int main()
{
  int arr[] = {9, -3, 5, -2, -8, -6, 1, 3};
  int n = sizeof(arr)/sizeof(arr[0]);
  Segregate(arr,n);
  return 0;
}
