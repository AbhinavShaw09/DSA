#include <bits/stdc++.h>
using namespace std;

//Swap adjacent bits of a number
int helper(int n)
{
	return ((n&(0xAAAAAAAA))>>1)|((n&(0x55555555))<<1);
}
int main()
{
	int n = 761622921;
	cout<<bitset<32>(n)<<endl;
	cout<<bitset<32>(helper(n));
	return 0;
}


