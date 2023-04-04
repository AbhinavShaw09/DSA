#include <bits/stdc++.h>
using namespace std;

pair<int,int> Duplicate(vector<int>&arr)
{
	int res = 0;
	for(int i=0;i<arr.size();++i)
	{
		res^=arr[i];
	}
	for(int i=1;i<arr.size()-1;i++)
	{
		res^=i;
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
		for(int i=1;i<arr.size()-1;++i)
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
	vector<int> arr = {4, 3, 6, 5, 2, 4, 1, 1 };
	pair<int,int>p = Duplicate(arr);
	cout<<p.first<<" "<<p.second;
	return 0;
}


