#include <bits/stdc++.h>
using namespace std;

int helper(int n)
{
	while(n&(n-1))
	{
		n=n&(n-1);
	}
	return n;
}
int main()
{
	int n;
	cin>>n;
	cout<<helper(n);
	return 0;
}


