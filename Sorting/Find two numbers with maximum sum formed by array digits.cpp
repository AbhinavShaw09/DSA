#include<bits/stdc++.h>>
using namespace std;

pair<int,int>MaxSum(int arr[],int n)
{
  sort(arr,arr+n);
  int x = 0,y=0;
  for(int i=n-1;i>=0;i-=2) x = x*10+arr[i];
  for(int i=n-2;i>=0;i-=2) y = y*10+arr[i];
  return make_pair(x,y);
}

int main()
{
  int arr[] = {4, 6, 2, 7, 9, 8 };
  int n = sizeof(arr)/sizeof(arr[0]);
  pair<int,int>p = MaxSum(arr,n);
  cout<<"("<<p.first<<","<<p.second<<")";
  return 0;
}
