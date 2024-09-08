#include <bits/stdc++.h>
using namespace std;

int helper(int n,int d)
{
	return n&(d-1);
}
int main()
{
	int n,d;
	cin>>n>>d;
	cout<<helper(n,d);
	return 0;
}

//d should be power of two
