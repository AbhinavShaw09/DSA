#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int c0;
	for(int i=0;i<n;++i)
	{
		int k;
		cin>>k;
		arr[i]=k;
		if(!arr[i]) c0++;
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int i=0;
	while(c0--)
	{
		arr[i++]=0;
	}
	for(;i<n;++i)
	{
		arr[i]=1;
	}
	for(int i=0;i<n;++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
