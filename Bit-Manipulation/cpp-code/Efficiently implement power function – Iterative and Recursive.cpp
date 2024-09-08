#include <bits/stdc++.h>
using namespace std;

int helper(int x,int n)
{
	int pow = 1;
	while(n)
	{
		if(n&1)
		{
			pow*=x;
		}
		x = x*x;
		n>>=1;
	}
	return pow;
}
int main()
{
	int n,x;
	cin>>n>>x;
	cout<<helper(n,x);
	return 0;
}

//d should be power of two
