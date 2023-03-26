#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int k =a^b;
	//Brian Kernighans Algo
	int count = 0;
	while(k)
	{
		k = k&(k-1);
		count++;
	}
	cout<<count<<endl;
}
