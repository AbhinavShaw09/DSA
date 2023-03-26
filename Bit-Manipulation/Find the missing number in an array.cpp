#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10 };
	int n = 10;
	int s = 0;
	for(int i =0;i<n;++i)
	{
		cin>>arr[i];
		s^=arr[i];
	}
	int total=0;
	for(int i=1;i<=n;++i)
	{
		s=s^i;
	}
	cout<<"The Missing number is: "<<s<<endl;
	return 0;
}
