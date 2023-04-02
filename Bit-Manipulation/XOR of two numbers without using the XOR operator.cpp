#include <bits/stdc++.h>
using namespace std;

int Xor(int x,int y)
{
	return (x | y) - (x & y);
}
int main()
{
	int x=65,y=80;
	cout<<bitset<8>(Xor(x,y));
	return 0;
}
