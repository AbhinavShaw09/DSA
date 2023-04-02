#include <bits/stdc++.h>
using namespace std;

int PowerOf4(int x)
{
	double res = log(x)/log(4);
	return res == trunc(res);
}
int main()
{
	int x = 11;
	cout<<PowerOf4(x);
	return 0;
}


