#include<bits/stdc++.h>
using namespace std;

pair<int,int> MinSum(int arr[],int n)
{
    int l=0,h=n-1;
    int mn = INT_MAX;
    int i=0,j=0;
    while(l<h)
    {
      int sum = arr[l]+arr[h];
      if(abs(sum)<mn)
      {
        mn = abs(sum);
        i = l;
        j = h;
      }
      if(sum == 0) break;
      else if(sum < 0)
      {
         l++; 
      }
      else
      {
        h--;
      }
    }
    return {arr[i],arr[j]};
}

int main()
{
  int arr[] = {-6, -5, -3, 0, 2, 4, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  pair<int,int>p = MinSum(arr,n);
  cout<<"("<<p.first<<","<<p.second<<")";
  return 0;
}
