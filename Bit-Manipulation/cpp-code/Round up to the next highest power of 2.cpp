#include <bits/stdc++.h>
using namespace std;

int helper(int n)
{
	n--;
	while(n&(n-1))
	{
		n=n&(n-1);
	}
	return n<<1;
}
int main()
{
	int n;
	cin>>n;
	cout<<helper(n);
	return 0;
}


