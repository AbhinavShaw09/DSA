#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n&(n>>1))
	{
		cout<<"Adjacent pair of set bits found"<<endl;
	}
	else
	{
		cout<<"Adjacent pair of set bits  not found"<<endl;
	}
	return 0;
}
