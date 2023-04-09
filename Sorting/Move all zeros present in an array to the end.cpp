#include <bits/stdc++.h>
using namespace std;

void MoveZero(vector<int>&arr)
{
  int k = 0;
  for(int i=0;i<arr.size();++i)
  {
    if(arr[i]!=0)  swap(arr[i],arr[k++]);
  }
  for(int i:arr) cout<<i<<" ";
}
int main() {
  //Time Complexity : O(n)
  //Space Complexity : O(1)
  vector<int>arr{6, 0, 8, 2, 3, 0, 4, 0, 1};
  MoveZero(arr);
  return 0;
}
