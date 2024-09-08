#include <bits/stdc++.h>
using namespace std;

void rev(string&a)
{
	for(int i=a.length()-1;i>=0;--i)
	{
		cout<<a[i];
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	string ans = "";
	while(n)
	{
		if(n&1)
		{
			ans.push_back('1');
			n = n>>1;
			continue;
		}
		ans.push_back('0');
		n = n>>1;
	}
	rev(ans);
	return 0;
}
