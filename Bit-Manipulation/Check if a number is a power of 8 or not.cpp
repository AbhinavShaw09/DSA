#include <bits/stdc++.h>
using namespace std;

int PowerOf8(int x)
{
	return x&&(0xB6DB6DB6);
}
int main()
{
	int x=65,y=80;
	cout<<bitset<8>(Xor(x,y));
	return 0;
}


