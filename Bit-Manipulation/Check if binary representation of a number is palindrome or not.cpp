#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
	int x = n;
	int rev=0;
	while(x)
	{
		int k = x&1;
		rev<<=1;
		rev = rev|k;
		x=x>>1;
	}
	return rev == n;
}
int main()
{
	if(isPalindrome(2))
	{
		cout<<"Palidrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}
