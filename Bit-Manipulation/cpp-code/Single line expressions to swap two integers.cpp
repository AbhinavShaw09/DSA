#include <iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x>>y;
	x = x^y^(y=x);
	//x = x+y-(y=x);
	//x = x*y/(y=x);
	cout<<x<<" "<<y<<endl;
	return 0;
}
