#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] =   { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	unordered_map<int,int>mp;
	int cur_sum = 0;
	mp[0]=0;
	int f = 0;
	for(int i=0;i<n;++i)
	{
		cur_sum+=arr[i];
		if(mp.find(cur_sum))
		{
			cout<<"Subarray exists"<<endl;
			f = 1;
			break;
		}
		mp[cur_sum]=i;
	}
	if(!f)
	{
		cout<<"Subarray does not exists"<<endl;
	}
	return 0;
}
