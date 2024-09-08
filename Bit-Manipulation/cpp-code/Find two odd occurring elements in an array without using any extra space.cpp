#include <bits/stdc++.h>
using namespace std;

pair<int,int> OddOccuring(vector<int>&arr)
{
	int res = 0;
	for(int i=0;i<arr.size();++i)
	{
		res^=arr[i];
	}
	int k = log2(res & -res);
	int x = 0,y = 0;
	for(int i=0;i<arr.size();++i)
	{
		if(arr[i]&(1<<k))
		{
			x^=arr[i];
		}
		else
		{
			y^=arr[i];
		}
	}
	return {x,y};
}
int main()
{
	vector<int> arr = { 4, 3, 6, 2, 4, 2, 3, 4, 3, 3 };
	pair<int,int>p = OddOccuring(arr);
	cout<<p.first<<" "<<p.second;
	return 0;
}


