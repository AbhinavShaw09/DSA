#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	unordered_set<int>st;
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
		if(st.find(arr[i]+k)!=st.end())
		{
			cout<<"("<<arr[i]+k<<" "<<arr[i]<<")"<<endl;
		}
		if(st.find(arr[i]-k)!=st.end())
		{
			cout<<"("<<arr[i]-k<<" "<<arr[i]<<")"<<endl;
		}
		st.insert(arr[i]);
		
	}
	return 0;
}
